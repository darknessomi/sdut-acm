#include <stdio.h>
int main(){
	int a[10],n,i,max,min,j,b,t;
	scanf("%d",&n);
	for(i=0;i<n;i++) 
	{ 
		scanf("%d",&a[i]);
	} 
	max=a[0];
	min=a[0]; 
	for(i=0;i<n;i++)
	{
		if(a[i]>=max) 
		{  
			max=a[i]; 
			j=i;
		} 
		if(a[i]<=min) 
		{ 
			min=a[i];
			b=i; 
		} 
	}

	a[j]=a[n-1];
	a[n-1]=max; 
	a[b]=a[0];
	a[0]=min; 

	for(i=0;i<n;i++) //删去{}
		printf("%d ",a[i]);
	printf("\n");

	return 0;
}