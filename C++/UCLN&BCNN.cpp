#include<iostream>
using namespace std;
int UCLN(int a,int b)
{
 while (b!=0)
 {
   int r=a%b;
   a=b;
   b=r;
 }
 return a;
}
int BCNN(int a,int b) 
{
	if(UCLN(a,b)==0){
		return 0;
	}
	else return a*(b/UCLN(a,b));
}
int main()
{
 int a,b;
 cout<<"Nhap a=";
 cin>>a;
 cout<<"Nhap b=";
 cin>>b;
 cout<<"UCLN("<<a<<","<<b<<")="<<UCLN(a,b)<<endl;
 cout<<"BCNN("<<a<<","<<b<<")="<<BCNN(a,b)<<endl;
 system("pause");
}
