#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
float BMI(float &k,float &h)
{
	float B=k/(h*h);
	return B;
}
int main()
{
	float k,h;
	cout<<"Nhap can nang: "<<endl;
	cin>>k;
	cout<<"Nhap chieu cao: "<<endl;
	cin>>h;
	cout<<"Can nang la: "<<k<<" Kg"<<endl<<"Chieu cao la: "<<h<<" M"<<endl;
	cout<<fixed<<setprecision(2)<<BMI(k,h)<<endl;
	if(BMI(k,h)<18.5)
	{
		cout<<"Thieu can";
	} else if(BMI(k,h)>=18.5&&BMI(k,h)<25)
	{
		cout<<"Trung binh";
	} else if(BMI(k,h)>=25&&BMI(k,h)<30)
	{
		cout<<"Thua can";
	} else cout<<"Beo phi";
	return 0;
}
