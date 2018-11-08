#include <string>
#include <iostream>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	cout << "chuoi: " << s << endl;
	for(int i=0;i<s.length();i++){
		s[i]=toupper(s[i]);
	}
	//strlwr(String);
	//strupr(s);
	cout << "Chuoi sau khi chuyen: " << s << endl;
   int dem = 0;
   string::size_type pos = 0;
   //string s = "Foo Bar FooBarFoo";
   string target = "NAM";
   while ((pos = s.find(target, pos )) != string::npos) {
          ++ dem;
          pos += target.length();
   }
   cout << dem << endl;

}
