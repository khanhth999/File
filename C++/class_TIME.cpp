#include<iostream>
#include<iomanip>
using namespace std;
class time{
	private:
		int gio,phut,giay;
	public:
		void nhap();
		void xuat();
};
void time::nhap(){
	do{
		cout<<"Nhap gio: ";
		cin>>gio;
	}while(gio>=24||gio<0);
	do{
		cout<<"Nhap phut: ";
		cin>>phut;
	}while(phut>60||phut<0);
	do{
		cout<<"Nhap giay: ";
		cin>>giay;
	}while(giay>60||giay<0);
}
void time::xuat()
{
	cout<<setfill('0')<<setw(2)<<gio<<":";
	cout<<setfill('0')<<setw(2)<<phut<<":";
	cout<<setfill('0')<<setw(2)<<giay;
}
int main()
{
	time d;
	d.nhap();
	d.xuat();
}
