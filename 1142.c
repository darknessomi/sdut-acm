#include <stdio.h>
 main()
{
	int a, b, c, max;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b) max=a;
	else max=b;
	printf("%d %d %d\n",a,b,max);
	if(c>max) max=c;
	printf("%d %d %d %d\n",a,b,c,max);
}
