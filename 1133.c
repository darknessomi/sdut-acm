#define M 10000
#include<stdio.h>
#include<math.h>
void main()
{
    unsigned a[M];  //以无符号整形存,每10000为一进位,即数组每个元素最大9999
    unsigned long k;  //k用来保存每次乘积
    int i,j,m,t,n=1,r; //n是数组长度，r是进位
    FILE *fp;
    a[0]=1;
    printf("\n输入m and t(空格隔开: m^t = ?):");
    scanf("%d %d",&m,&t);

    for(j=0; j<t; j++)
    {
        r=0;
        for(i=0; i<n; i++)
        {
            k=a[i]*m+r;
            a[i]=k%10000;
            r=k/10000;
        }

       while(r>0)
        {
            a[n++]=r%10000;
            r/=10000;
        }
    }
    fp=fopen("c:\\2-100000.txt","w");
    printf("\n %d^%d =",m,t);

    for(i=n-1; i>=0; i--)
    {   if(a[i]<1000&&a[i]>=100&&i!=n-1) fprintf(fp,"%c",'0');      //数据不够4位,前面补0
            else if(a[i]<100&&a[i]>=10&&i!=n-1) fprintf(fp,"%s","00");
            else if(a[i]<10&&i!=n-1) fprintf(fp,"%s","000");
        fprintf(fp,"%d",a[i]);
    }
    close(fp);
}
