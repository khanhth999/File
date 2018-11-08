#include<iostream>
#include<string> 

using namespace std;

void Xoa_Khoang_Trang_Thua_Dau_Va_Cuoi(string &str)
{
	while (str[0] == ' ')
	{
		str.erase(str.begin() + 0); 
	}

	while (str[str.length() - 1] == ' ')
	{
		str.erase(str.begin() + str.length() - 1); 
	}
}

void Xoa_Khoang_Trang_Giua_Cac_Tu(string &str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ' && str[i + 1] == ' ')
		{
			str.erase(str.begin() + i);
			i--;
		}
	}
}

void In_Hoa_Ki_Tu_Dau_Moi_Tu(string &str)
{
	//strlwr((char *)str.c_str()); 
	for(int i =0; i<str.length();i++)
	{
		str[i]=tolower(str[i]);
	}
	if (str[0] != ' ')
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] -= 32;
		}
		
	}
	for (int i = 0; i < str.length() - 1; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;
			}
		}
	}
}
int main()
{
	string str;
	cout << "\nNhap chuoi: ";
	getline(cin, str);
	cout << "\nDo dai chuoi: " << str.length();
	Xoa_Khoang_Trang_Thua_Dau_Va_Cuoi(str);
	Xoa_Khoang_Trang_Giua_Cac_Tu(str);
	In_Hoa_Ki_Tu_Dau_Moi_Tu(str);
	cout << "\nChuoi sau khi xu li: " << str;
	return 0;
}
