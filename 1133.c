#define M 10000
#include<stdio.h>
#include<math.h>
void main()
{
    unsigned a[M];  //���޷������δ�,ÿ10000Ϊһ��λ,������ÿ��Ԫ�����9999
    unsigned long k;  //k��������ÿ�γ˻�
    int i,j,m,t,n=1,r; //n�����鳤�ȣ�r�ǽ�λ
    FILE *fp;
    a[0]=1;
    printf("\n����m and t(�ո����: m^t = ?):");
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
    {   if(a[i]<1000&&a[i]>=100&&i!=n-1) fprintf(fp,"%c",'0');      //���ݲ���4λ,ǰ�油0
            else if(a[i]<100&&a[i]>=10&&i!=n-1) fprintf(fp,"%s","00");
            else if(a[i]<10&&i!=n-1) fprintf(fp,"%s","000");
        fprintf(fp,"%d",a[i]);
    }
    close(fp);
}
