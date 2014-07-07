#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <windows.h>
using namespace std;

size_t countUnsortedness(const string &s)
{
	int sum = 0;
	for(int i = 0;i < s.size();i++)
		for(int j = i+1; j <s.size(); j++)
			if (s[j] < s[i] )
				sum++;
	return sum;
}

bool comp(const string &s1,const string &s2)
{
	return countUnsortedness(s1) < countUnsortedness(s2) ? true : false;
}

int main()
{
	vector< string > DNAs;
	int n,m;
	cin >> n >> m;
	for(string s;m--;cin>>s,DNAs.push_back(s));
	stable_sort(DNAs.begin(),DNAs.end(),comp);
	for(int i = 0; i < DNAs.size(); i++)
		cout << DNAs[i] << endl;
	system("pause");
	return 0;
}