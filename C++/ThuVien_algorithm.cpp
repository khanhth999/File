#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[100],n;
	cout<<"Nhap so luong: ";
	cin>>n;
	cout<<"\nNhap Mang: ";
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	sort(a, a +n);
	cout<<"\nMang thu dc la: ";
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	//cout<<"Max: "<<max(a,a+n)<<"\n"<<"Min: "<<min(a,a+n);
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max) 
		max=a[i];
	}
	cout<<"\nMax: "<<max;
}
