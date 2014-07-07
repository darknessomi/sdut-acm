// pku 3421 给一个整数X,求X的分解。1=X0,X1,X2,...,Xm=X，其中Xi整除X(i+1)且Xi<X(i+1)，要求最大的m跟有多少种这样长度的链。
// 算法：因为m要最大，所以每次Xi只能乘以一个质因子。若不然可以得到一个更短的链。
// 先求出所有的质因子，所有质因子的排列除以重复的次数就是这种链的个数.
#include <iostream>
#include <math.h>
using namespace std;
__int64 p[172];
// 因子数目最多是20个
int e[21];
int cnt;
__int64 factor[21];
void prime()
{
int i,j,flag;
p[0]=2;
p[1]=3;
cnt=2;
for(i=5;i<=1024;i+=2){
flag=0;
for(j=1;p[j]*p[j]<=i;j++){
if(i%p[j]==0) {flag=1;break;}
}
if(!flag) p[cnt++]=i;
}
}
// 先质因子分解，再求组合的个数
void solve(__int64 a)
{
// j统计所有质因子的个数，k统计不同质因子个数
int i,j=0,flag,l=0;
memset(e,0,sizeof(e));
// 用1024以内的素数分解a，注意到a<=2^20，a最多含有一个超过1024的质因子 
// a=p1^e1*p2^e2**pk^ek*ps^es，其中只有ps是大于1024的素数，且es只能为0或1
for(i=0;i<cnt && a>1;i++){
flag=0;
while(a%p[i]==0){
flag=1;
e[l]++;
a/=p[i];
j++;
}
if(flag==1) l++;
}
// 若此时a!=1则a一定是素数
if(a!=1) {j++;e[l++]=1;}
__int64 res = factor[j];
for(i=0;i<l;i++){
if(e[i]!=0) res/=factor[e[i]];
}
printf("%d %I64d\n",j,res);
}
int main()
{
prime1();
//cnt=172;
// 阶乘
factor[0]=1;
for(__int64 i=1;i<21;i++) factor[i]=factor[i-1]*i;
__int64 a;
while(scanf("%I64d",&a)!=EOF){
solve(a);
}

return 1;
}