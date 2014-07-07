#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <algorithm>
#include <string>
#include <set>
#include <functional>
#include <numeric>
#include <sstream>
#include <stack>
#include <map>
#include <queue>
 
#define CL(arr, val)    memset(arr, val, sizeof(arr))
 
#define lc l,m,rt<<1
#define rc m + 1,r,rt<<1|1
#define pi acos(-1.0)
#define ll long long
#define L(x)    (x) << 1
#define R(x)    (x) << 1 | 1
#define MID(l, r)   (l + r) >> 1
#define Min(x, y)   (x) < (y) ? (x) : (y)
#define Max(x, y)   (x) < (y) ? (y) : (x)
#define E(x)        (1 << (x))
#define iabs(x)     (x) < 0 ? -(x) : (x)
#define OUT(x)  printf("%I64d\n", x)
#define lowbit(x)   (x)&(-x)
#define Read()  freopen("din.txt", "r", stdin)
#define Write() freopen("dout.txt", "w", stdout);
 
 
#define M 5007
#define N 1007
using namespace std;
 
const int inf = 0x7fffffff;
struct node
{
    int nch;
    int nx,ny;
}ans[M],tmp[M],res[M],mul[M];
 
int n,al,tl,rl,ml;
char op[2],str[N];
 
void addInsert(node *ans,node *res,int rl)
{
    int i,j;
    bool flag = false;
    for (i = 0; i < rl; ++i)
    {
        flag = false;
        for (j = 0; j < al; ++j)
        {
            if (ans[j].nx == res[i].nx && ans[j].ny == res[i].ny)
            {
                ans[j].nch += res[i].nch;
                flag = true;
            }
        }
        if (!flag)
        {
            ans[al].nch = res[i].nch;
            ans[al].nx = res[i].nx;
            ans[al].ny = res[i].ny;
            al++;
        }
    }
}
void mulInsert(node *res,int rl)
{
    int i,j;
    CL(ans,0); al = 0;
 
//    for (i = 0; i < rl; ++i)
//    printf("%d %d %d\n",res[i].nch,res[i].nx,res[i].ny);
//
//    printf("************\n");
//    for (i = 0; i < tl; ++i)
//    printf("%d %d %d\n",tmp[i].nch,tmp[i].nx,tmp[i].ny);
 
 
    for (i = 0; i < rl; ++i)
    {
        for (j = 0; j < tl; ++j)
        {
            mul[j].nch = tmp[j].nch*res[i].nch;
            mul[j].nx = tmp[j].nx + res[i].nx;
            mul[j].ny = tmp[j].ny + res[i].ny;
        }
        addInsert(ans,mul,tl);
    }
 
 
 
    for (i = 0; i < al; ++i)
    {
        tmp[i] = ans[i];
    }
    tl = al;
}
bool isDigit(char ch)
{
    if (ch >= '0' && ch <= '9') return true;
    else return false;
}
int cmp(node a,node b)
{
    if (a.nx != b.nx) return a.nx > b.nx;
    else return a.ny > b.ny;
}
void work(char *str,int no)
{
//    printf("%s\n",str);
 
    int j,i;
    int a1,a2,a3;
    int len = strlen(str);
 
    //将多项式拆分
    if (isDigit(str[0])) a1 = 0;
    else a1 = 1;
    a2 = a3 = 0;
    int flag = 1;
    rl = 0;
 
    for (j = 0; j < len; ++j)
    {
        if (isDigit(str[j]))
        {
            if (flag == 1) a1 = a1*10 + str[j] - '0';
            else if (flag == 2) a2 = a2*10 + str[j] - '0';
            else if (flag == 3) a3 = a3*10 + str[j] - '0';
        }
        else if (str[j] == 'x')
        {
            flag = 2;
            if (str[j + 1] != '^') a2 = 1;
            else a2 = 0;
        }
        else if (str[j] == 'y')
        {
            flag = 3;
            if (str[j + 1] != '^') a3 = 1;
            else a3 = 0;
        }
        else if (str[j] == '+')
        {
            if (a1 != 0)
            {
                res[rl].nch = a1;
                res[rl].nx = a2;
                res[rl].ny = a3;
                rl++;
            }
            a2 = a3 = 0;
            if (isdigit(str[j + 1])) a1 = 0;
            else a1 = 1;
            flag = 1;
        }
    }
 
    if (a1 != 0)
    {
        res[rl].nch = a1;
        res[rl].nx = a2;
        res[rl].ny = a3;
        rl++;
    }
//    for (i = 0; i < rl; ++i)
//    printf("%d %d %d\n",res[i].nch,res[i].nx,res[i].ny);
 
 
    if (op[0] == '+') addInsert(ans,res,rl);
    else
    {
        if (no == 0)
        {
            for (i = 0; i < rl; ++i)
            {
                ans[i] = tmp[i] = res[i];
            }
            tl = al = rl;
        }
        else mulInsert(res,rl);
    }
}
int main()
{
//    Read();
//    Write();
    int i;
    while (~scanf("%d",&n))
    {
        if (!n) break;
        al = tl = rl = 0;
        CL(ans,0);
        scanf("%s",op);
        for (i = 0; i < n; ++i)
        {
            scanf("%s",str);
            work(str,i);
        }
 
        for (i = 0; i < al; ++i)
        {
            if (ans[i].nx != 0 && ans[i].ny == 0)
            {
                ans[i].ny = inf;
            }
        }
        sort(ans,ans + al,cmp);
        for (i = 0;i < al; ++i)
        {
            if (ans[i].nch != 1)  printf("%d",ans[i].nch);
            else if (ans[i].nx == 0 && ans[i].ny == 0) printf("%d",ans[i].nch);
 
            if (ans[i].nx)
            {
                if (ans[i].nx == 1) printf("x");
                else printf("x^%d",ans[i].nx);
            }
            if (ans[i].ny != inf && ans[i].ny)
            {
                if (ans[i].ny == 1) printf("y");
                else printf("y^%d",ans[i].ny);
            }
            if (i != al - 1) printf("+");
        }
        //注意结果为0的输出
        if (al == 0) printf("0");
        printf("\n");
    }
    return 0;
}
