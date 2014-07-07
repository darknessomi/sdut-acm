#include <stdio.h>  
#include <iostream>  
#include <math.h>  
#include <algorithm>  
#include <string.h>  
using namespace std;  
struct N                //结构体  
{  
    char str[10];  
    int a;  
}p[10];  
int cmp(N j,N k)  
{  
    return strcmp(j.str,k.str)<0;  
}  
int main()  
{  
    for(int i=0;i<10;i++)  
    {  
        scanf("%s",&p[i].str);  
    }  
    for(int i=0;i<10;i++)  
    {  
        scanf("%d",&p[i].a);  
    }  
    sort(p,p+10,cmp);           //结构体排序  
    for(int j=0;j<10;j++)  
    {  
        printf("%s,%d\n",p[j].str,p[j].a);  
    }  
    return 0;  
}  
