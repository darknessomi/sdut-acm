#include <stdio.h>
#include <math.h>
int main()
{
	double x,y;
	while (scanf("%lf", &x) != EOF)
	{
		y = 0.0;
		if ( x>0 ) 
		{
			y=pow(x,   (double)2)+1;
		}
		else if ( x<0 ) 
		{
			y=-x;
		}
		else           
		{
			y=100.00;
		}

		printf("%.1lf\n",y);
	}
	return 0;
}

