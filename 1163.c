#include <stdio.h>

int main()
{    
	 int i;
	 int j;
	 int k;
	 int num[4];

	 for(i=0; i<4; i++)
	 {
	    scanf("%d", &num[i]);
	 }

	 for(i=0; i<4; i++)
	 {
	     for(j=0; j<4; j++)
		 {
		     for(k=0; k<4; k++)
			 {
			     if(i!=j && i!=k && j!=k && i!=3 && j!=3 && k!=3 )
				 {
				    printf("%d %d %d\n", num[i], num[j], num[k]);
				 }
			 }
		 }
	 }
     
	 for(i=0; i<4; i++)
	 {
	     for(j=0; j<4; j++)
		 {
		     for(k=0; k<4; k++)
			 {
			     if(i!=j && i!=k && j!=k && i!=2 && j!=2 && k!=2 )
				 {
				    printf("%d %d %d\n", num[i], num[j], num[k]);
				 }
			 }
		 }
	 }

	 for(i=0; i<4; i++)
	 {
	     for(j=0; j<4; j++)
		 {
		     for(k=0; k<4; k++)
			 {
			     if(i!=j && i!=k && j!=k && i!=1 && j!=1 && k!=1 )
				 {
				    printf("%d %d %d\n", num[i], num[j], num[k]);
				 }
			 }
		 }
	 }

	 for(i=0; i<4; i++)
	 {
	     for(j=0; j<4; j++)
		 {
		     for(k=0; k<4; k++)
			 {
			     if(i!=j && i!=k && j!=k && i!=0 && j!=0 && k!=0 )
				 {
				    printf("%d %d %d\n", num[i], num[j], num[k]);
				 }
			 }
		 }
	 }

     return 0;
} 
