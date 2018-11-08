#include<iostream>
using namespace std;
int tong(int &n)
{
	int S=0,m;
	while(n>0)
	{
		m=n%10;
		S = S + m;
		n=n/10;
	}
	return S;
}
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"tong la: "<<tong(n);
	return 0;
}
