#include<iostream>
#include<cmath>
using namespace std;
int bac2(float &a,float &b,float &c)
{
	double denta = b * b - 4 * a * c;
	if(denta<0)
	{
		cout<<"Vo nghiem";
	}
	else if (denta == 0)
	{
		cout<<"Nghiemkep: "<<fixed<<setprecision(2)<< -b / 2 * a;

	}
	else
	{
		float nghiem1 = (-b - sqrt(denta)) / (2 * a);
		float nghiem2 = (-b + sqrt(denta)) / (2 * a);
		cout<<"Nghiem 1: "<<fixed<<setprecision(2)<<nghiem1;
		cout<<"Nghiem 2: "<<fixed<<setprecision(2)<<nghiem2;
	}
}
int main()
{
	flaot a,b,c;
	cout<<"nhap he so: ";
	cin>>a>>b>>c;
	cout<<bac2(a,b,c);
	
}
