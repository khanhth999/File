#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	if( is_permutation( s1.begin(), s1.end(), s2.begin()) )
	{
		cout<<"Yes";
	}
	else cout<<"No";
	return 0;
}
