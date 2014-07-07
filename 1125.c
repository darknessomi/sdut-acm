#include <stdio.h> 
int main() 
{ 
    int a,b,c,d; 
    scanf("%d %d",&a,&b); 
    c=(a+1)*a/2+(a-1)*a;//最大值 
    d=(a+1)*a/2+a-1;//最小值 
    if(b==c||b==d) 
        printf("1\n"); 
    else if((c-b)<(a-1)) 
        printf("3\n"); 
    else if((b-d)<(a-1)) 
        printf("3\n"); 
    else if((c-b)%(a-1)==0) 
        printf("2\n"); 
    else 
        printf("4\n"); 
    return 0; 
}