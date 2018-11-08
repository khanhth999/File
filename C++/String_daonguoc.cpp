#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    string s[100];
    int pos = 0, oldpos=-1;
    int max = 0;
    getline(cin, str);
    while ((pos = str.find(" ", pos)) != string::npos)
    {
        s[max++] = str.substr(oldpos + 1, pos - oldpos - 1);
        oldpos = pos;
        pos++;
    }
    s[max++] = str.substr(oldpos + 1, pos - oldpos - 1);
    for (int i = max-1; i >= 0; i--)
        cout << s[i] << " ";
    return 0;
}
