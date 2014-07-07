#include <stdio.h>
int g(int n)
{
 	return n*n*n;
}
int f(int n)
{
	int r = 0;
	while (n > 0)
	{
   		r += g(n%10);
   		n /= 10;
	}
	return r;
}
int main()
{
	int x, y, i, b;
	while (scanf("%d %d", &x, &y) == 2)
	{
   		b = 0;
   		for (i=x; i<=y; ++i)
   		{
    		if (f(i) == i)
    		{
     	 	 	if (b)
     			{ 
     		  		printf(" "); 
     			}
     	 		b = 1;
     	 		printf("%d", i);
    		}
        }
    	if (b == 0)
   		{
   		 	printf("no");
   		}
     	printf("\n");
	}
 	return 0;
}