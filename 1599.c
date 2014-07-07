#include <stdio.h>

float Analy(char a[]);
void Resolve(char a[],char b[],char c[]);

int main()
{
	char arr1[10];
	char arr2[10],arr3[10];
	int n,i;
	float a,b;
	float t;

	scanf("%d",&n);
	char c=getchar();
	for(i=0; i<n; i++)
	{
		gets(arr1);
		Resolve(arr1,arr2,arr3);
		a = Analy(arr2);
		b = Analy(arr3);
		if(a<b)
		{
			t=a;
			a=b;
			b=t;
		}
		if(a+b == 10.5 || a*b == 10.5 || a/b == 10.5 || a-b == 10.5)
			printf("Case %d: WIN\n",i+1);
		else
			printf("Case %d: LOSE\n",i+1);
	}
	
	return 0;
}

void Resolve(char a[],char b[],char c[])
{
	int i=0,j=0,k=0;
	
	while(a[i] != ' ')
		b[j++] = a[i++];
	b[j] = '\0';

	i++;
	
	while(a[i] != '\0')
		c[k++] = a[i++];
	c[k] = '\0';
}

float Analy(char a[])
{
	if(a[0] == 'A' || a[0] == 'S')
		return 0.5;
	else if(a[0] == 'J')
		return 11;
	else if(a[0] == 'Q')
		return 12;
	else if(a[0] == 'K')
		return 13;
	else if(a[1] >= '0')
		return ((a[0]-'0')*10 + (a[1]-'0'));
	else				
		return (a[0]-'0');
}
