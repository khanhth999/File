#include<iostream>
using namespace std;
void nhap(int &N,int a[])
{
	for(int i=0;i<N;i++)
	{
		cin>>a[i];
	}
}
void dem_ghi(int &N,int a[])
{
	int b[10];
	for(int i=0;i<N;i++)
		b[i]=0;
	cout<<"So \t So lan xuat hien"<<endl;
	for(int i=0;i<N;i++)
	{
		int dem=1;
		if(b[i]){
			b[i]=0;
			for(int j=i+1;j<N;j++)
			{
				if(a[j]==a[i])
				{
					dem++;
					b[j]=0;
				}
			}
			cout<<a[i]<<"\t"<<dem;
	}
}
}
int main()
{
	int N,a[100];
	cin>>N;
	nhap(N,a);
	dem_ghi(N,a);
	return 0;
}
