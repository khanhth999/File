#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
double ConvertFtoC(double f)
{
	return (f-32)*5/9;
}
double ConvertCtoK(double c)
{
	return c+273.15;
}
int main()
{
	ofstream outfile;
	outfile.open("nhietdo.dat", ios::out | ios::trunc);
	cout<<setw(12)<<left<<"Fahrenheit"<<setw(12)<<"Celsius"<<setw(12)<<"Absolute Value"<<endl;
	outfile<<setw(12)<<left<<"Fahrenheit"<<setw(12)<<"Celsius"<<setw(12)<<"Absolute Value"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<setw(12)<<left<<i<<setw(12)<<ConvertFtoC(i)<<setw(12)<<ConvertCtoK(ConvertFtoC(i))<<endl;
		outfile<<setw(12)<<left<<i<<setw(12)<<ConvertFtoC(i)<<setw(12)<<ConvertCtoK(ConvertFtoC(i))<<endl;
	}
	outfile.close();
	cout<<"------Mo file-----";
	ifstream infile; 
    infile.open("nhietdo.dat", ios::in);
    
	infile>>setw(12)>>left>>"Fahrenheit">>setw(12)>>"Celsius">>setw(12)>>"Absolute Value";
	cout<<setw(12)<<left<<"Fahrenheit"<<setw(12)<<"Celsius"<<setw(12)<<"Absolute Value"<<endl;
	for(int i=0;i<10;i++)
	{
	
		infile>>setw(12)>>left>>i>>setw(12)>>ConvertFtoC(i)>>setw(12)>>ConvertCtoK(ConvertFtoC(i));
		cout<<setw(12)<<left<<i<<setw(12)<<ConvertFtoC(i)<<setw(12)<<ConvertCtoK(ConvertFtoC(i))<<endl;
	}
	infile.close();
	return 0;
}
