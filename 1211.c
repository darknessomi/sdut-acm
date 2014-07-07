#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int v,i,j,k;
  float a[7],sum=0,t;
  char c[33];
  while(scanf("%f",&a[0])!=EOF){
    for(i=1;i<7;i++){
      scanf("%f",&a[i]);
    }
    scanf("%s",c);
    for(j=0;j<6;j++)
    for(k=0;k<6-j;k++)
    if(a[k]>a[k+1]){
      t=a[k];
      a[k]=a[k+1];
      a[k+1]=t; 
    }
    for(j=1;j<6;j++){
      sum=sum+a[j];
    }
    printf("%s",c);
    printf(" %0.2f\n",sum/5);
    sum=0; 
  }
  return 0;
}

