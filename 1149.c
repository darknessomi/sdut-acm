#include <stdio.h>
int f(int m,int n)
{
	if (m==1)
		return n;
	if (n==1)
		return m;
	if (n||m)
	{
		return f(m-1,n)+f(m,n-1);
	}
}
int main()
{
	int n,a,b;
	scanf("%d",&n);
	while (n--)
	{
		scanf("%d%d",&a,&b);
		printf("%d\n",f(a,b));
	}
}