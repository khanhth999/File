#include<iostream>
#include<iomanip>
using namespace std;
class ChuSoNguyen{
	private:
		int a,b[100],dem=0;
	public:
		void nhap(){
			cout<<"Nhap so can tach: ";
			cin>>a;
		}
		void tach();
		void inkp();
};
void ChuSoNguyen::tach(){
	int i=0;
	while(a!=0){
		int c=a%10;
		a=a/10;
		b[i]=c;
		i++;
		dem++;
	}
}
void ChuSoNguyen::inkp(){
	cout<<"Ket qua:";
	for(int i=dem; i>=0;i--)
	{
		cout<<b[i]<<"   ";
	}
}
int main(){
	ChuSoNguyen S;
	S.nhap();
	S.tach();
	S.inkp();
}

