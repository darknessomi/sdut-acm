#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n>=0&&n<=100)
		{if(n>=90)
			cout<<'A'<<endl;
		else if(n>=80)
			cout<<'B'<<endl;
		else if(n>=70)
			cout<<'C'<<endl;
		else if(n>=60)
			cout<<'D'<<endl;
		else
			cout<<'E'<<endl;}


		else cout<<"Score is error!"<<endl;}




	return 0;
}
