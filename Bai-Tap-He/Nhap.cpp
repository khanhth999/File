#include <iostream>
#include <iomanip> //can le
#include <fstream>
using namespace std;

double  ConvertFtoC(double F)
{
    return (F-32)*5/9;
}
double  ConvertCtoK(double C)
{
    return C+273.15;
}

int main()
{
    ofstream outfile;
    outfile.open("nhietdo.dat", ios::out | ios::trunc );
    cout << setw(12) << left << "Fahrenheit" << setw(12)
    << "Celsius" << setw(12) << "Absolute Value" << endl;

    outfile << setw(12) << left << "Fahrenheit" << setw(12)
    << "Celsius" << setw(12) << "Absolute Value" << endl;

    for(int i = 0; i <=300; i+=12)
    {
        cout << setw(12) << left << i << setw(12) << ConvertFtoC(i)
        << setw(12) << ConvertCtoK(ConvertFtoC(i)) <<endl;

        outfile << setw(12) << left << i << setw(12) << ConvertFtoC(i)
        << setw(12) << ConvertCtoK(ConvertFtoC(i)) <<endl;
    }
    outfile.close();
    return 0;
}
