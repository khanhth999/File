#include<iostream>
using namespace std;
int tinh(int n,int N[])
{
	int dem=0;

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (N[i] == N[j])
			{
				dem=dem+1;
				dem++;
			}
		}
	}
	if(dem==0) return 0;
	else return 1;
}
int main()
{
	int n,N[10000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>N[i];
	}
	cout<<tinh(n,N);
}
