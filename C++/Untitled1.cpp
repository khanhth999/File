#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,x,y,deta;
    cin>>a>>b>>c;
    if(a=0)
    	cout<<fixed<<setprecision(2)<<-c/b;
    deta=b*b-4*a*c;
    if(deta==0)
        	x=-b/(2*a);
            cout<<fixed<<setprecision(2)<<x;
    if(deta>0){
        	x=(-b+sqrt(deta))/2*a;
        	y=(-b-sqrt(deta))/2*a;
            cout<<fixed<<setprecision(2)<<x<<endl;
            cout<<fixed<<setprecision(2)<<y<<endl;
        }
    return 0;
}
