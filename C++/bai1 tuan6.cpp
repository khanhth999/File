#include<iostream>
#include<cmath>
using namespace std;
void nhap(float a[], int &n)
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
int main()
{
    float min,max,a[100];
    int i,n;
    max=a[1];
    for(i=1;i<=n;i++){
        if(max<a[i])
        max=a[i];
	}
	min=a[1];
    for(i=1;i<=n;i++){
        if(min>a[i])
        min=a[i];
	}
    return 0;
}
