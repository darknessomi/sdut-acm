
#include <stdio.h>

#include <math.h>

void main()

{

	int m,i,count,n;

	double k;

	scanf("%d",&n);

	if(n<10000)

	{

		if(n==1)
		{	
			printf("");
	    }

		if(n==2)
		{	
			printf("2\n");
		}

		if(n!=1&&n!=2)

		{

			count=1;

			printf("2 ");

			for(m=3;m<=n;m=m+2)

			{

				k=sqrt(m);

				for(i=2;i<=k;i++) if(m%i==0)break;

				if(i>k)

				{

					count++;

					printf("%d ",m);

					if(count%10==0)

					printf("\n");

				}

			}		
			
			printf("\n");

		}

	}

}