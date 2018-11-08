// doc file theo thu tu va in ra man hinh
#include <iostream>

#include <fstream>
#include <iomanip>

using namespace std;
using std::setw;
using std::setprecision;
#include <cstdlib> // de dung cho exit

void outputLine( int, const char * const, double );

int main()
{
	
    // mo file de ghi
    ofstream outClientFile( "clients.dat", ios::out );
    
    // thoat khoi chuong trinh neu khong mo duoc
    if ( !outClientFile ) {
        cout << "Khong mo duoc file" << endl;//cout
        return 1;
    } // cua if
    
    cout << "Nhap so tai khoan, ten, so tien." << endl
    << "Nhan enter de ket thuc.\n? ";
    int account;
    char name[ 30 ];
    double balance;
    
    // doc so tai khoan, ten, so tien va ghi vao file

        cin >> account >> name >> balance
        outClientFile << account << ' ' << name << ' ' << balance<< endl;
        cout << "Nhan 0 de ket thuc "; 
    // cua while
    // mo file
    ifstream inClientFile( "clients.dat", ios::in );
    
    // thoat khoi chuong trinh neu khong the mo file
    if ( !inClientFile ) {
        cout << "Khong mo duoc file" << endl;
        return 1;
    } // cua if
    
    
    cout <<  "Tai khoan    Ten   So tien" << endl ;
   
    // hien thi tung ban ghi trong file
    while (!inClientFile.eof()  ){
        inClientFile >> account >> name >> balance;
        if (!inClientFile.eof())
            cout<< account << " "<< name<< "  "<< balance ;
    }
    return 0;
    
}
