#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void bac2(float &a,float &b,float &c)
{
	double denta = b * b - 4 * a * c;
	if(denta<0)
	{
		cout<<"Vo nghiem";
	}
	else if (denta == 0)
	{
		float Nghiemkep = -b / 2 * a;

	}
	else
	{
		float nghiem1 = (-b - sqrt(denta)) / (2 * a);
		float nghiem2 = (-b + sqrt(denta)) / (2 * a);
	}
}
int main()
{
	float a,b,c;
	cout<<"nhap he so: ";
	cin>>a>>b>>c;
	if(bac2(a,b,c));
	
	cout<<"Nghiem 1: "<<fixed<<setprecision(2)<<nghiem1<<endl;
	cout<<"Nghiem 2: "<<fixed<<setprecision(2)<<nghiem2;
	return 0;
}
