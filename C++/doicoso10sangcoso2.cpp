#include<iostream>
using namespace std;

int main()
{
    long n, dem=0;
    int a[1000];
    
    if(n<0)
    {
        n=-n;
    }
    else{
        n=n;
    }
    while(n>0)
    {
        a[dem]=n%2;
        n=n/2;
        dem++;
    }
    for(int i = dem;i>0;i--){
    cout<<a[i];
    }
    return 0;
}
