
#include <iostream>
#include <fstream>//de ghi file

using name space std ;

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
    int stop= 1;
    while ( stop !=0 ) {
        cin >> account >> name >> balance
       outClientFile << account << ' ' << name << ' ' << balance<< endl;
        cout << "Nhan 0 de ket thuc "; cin>>stop;
    } // cua while
    return 0;
} // cua main
