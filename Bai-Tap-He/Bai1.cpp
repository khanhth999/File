#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
float xacdinh(float &a,float &b,float &c)
{
	if(a+b<c||b+c<a||a+c<b) return 0;
		
	else if(a==b&&b==c) return 1;
	
	else if(a==b||a==c||b==c) return 2;
			
	else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) return 3;
		
	else return 4;
}
float kiemtra(float &a,float &b,float &c)
{
	float p=(a+b+c)/2;
	if(xacdinh==0) return 0;
	else return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main()
{
	float a,b,c;
	cin>>a>>b>>c;
	cout<<xacdinh(a,b,c)<<endl;
	cout<<fixed<< setprecision(2)<<kiemtra(a,b,c);
}
