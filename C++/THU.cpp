#include<iostream>
#include<string>
using namespace std;
void chuythuong(string &s)
{
	for(int i=0; i<s.length(); i++)
	{
		s[i]=tolower(s[i]);
	}
}
void timchu(string &s, string &s0, int& dem)
{
	string::size_type pos = 0;
	while((pos = s.find(s0, pos)) != string::npos )
	{
		dem++;
		pos += s0.length();
	}
	
}
int main()
{
	string s,s0;
	int dem=0;
	cout<<"Nhap chuoi: ";
	cin>>s;
	chuythuong(s);
	cout<<"Chuoi thu duoc: ";
	// cin>>s;
    cout << s << endl;
	cout<<"Nhap chu can tim: ";
	cin>>s0;
	timchu(s,s0, dem);
	cout<< dem;
}
