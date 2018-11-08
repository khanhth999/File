#include<iostream>
#include<fstream>
#include<cstdio>
#include<conio.h>
using namespace std;
struct sinhvien{
	char msv[12];
	int toan;
	int ly;
	int tienganh;
	int tb;
};
void nhap1sv(sinhvien sv, int &n)
{
	cout<<"Nhap so luong sinh vien:"; cin>>n;
	
	for(int i=0;i<n;i++)
	{
	cout<<"NhapthongtinSinhvien1:"<<endl;
	cout<<"Nhap ma sv: "<<endl;
	cin>>(sv.msv);
	cout<<"Nhap Diem Toan: "<<endl;
	fflush(stdin);
	cin>>sv.toan;
	cout<<"Nhap Diem Ly: "<<endl;
	fflush(stdin);
	cin>>sv.ly;
	cout<<"Nhap Diem Tieng anh: ";
	fflush(stdin);
	cin>>sv.tienganh;
}
}
void check(sinhvien x[],int n)
{
	float tb=(x.toan+x.ly+x.tienganh)/3;
	int k;
	cout<<"Nhap K: ";
	cin>>k;
	if(k==1)
	{
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++)
			{
				if(x[i].toan>x[j].toan)
				{
					float t=x[i].toan;
					x[i].toan=x[j].toan;
					x[j].toan=t;
				}
			}
		}
	}
	else if(k==2)
	{
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++)
			{
				if(x[i].ly>x[j].ly)
				{
					float t=x[i].ly;
					x[i].ly=x[j].ly;
					x[j].ly=t;
				}
			}
		}
	}
	else if(k==3)
	{
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++)
			{
				if(x[i].tienganh>x[j].tienganh)
				{
					float t=x[i].tienganh;
					x[i].tienganh=x[j].tienganh;
					x[j].tienganh=t;
				}
			}
		}
	}
	else
	{
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++)
			{
				if(x[i].tb>x[j].tb)
				{
					float t=x[i].tb;
					x[i].tb=x[j].tb;
					x[j].tb=t;
				}
			}
		}
	}
	cout<<"\t\t toan"<<"\t\t ly"<<"\t\t tieng anh"<<endl;
	for(int i=0;i<n;i++)
	{		
		cout<<"sinh vien "<<i<<"\t"<<x[i].toan<<"\t\t"<<x[i].ly<<"\t\t"<<x[i].tienganh<<endl;
	}
}
int main()
{
	
	int n;
	sinhvien sv[100];
	nhap1sv(sv,n);
	check(x,n);
	getch();
	return 0;
}
