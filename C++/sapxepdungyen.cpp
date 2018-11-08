#include <iostream>
#include <set>
#include <cmath>
using namespace std;
bool ngto(int a);
int main()
{
    int n;
    cin >> n;
    int a[n];
    set <int> nto;
    set <int>::iterator j;
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
        if(ngto(a[i]))
        {
            nto.insert(a[i]);
            a[i] = -1;
        }
    }
    j = nto.begin();
    for(int i = 0; i<n; i++)
    {
        if(a[i] == -1)
        {
            cout << *j << " ";
            j++;
        }
        else cout << a[i] << " ";
    }
    return 0;
}

bool ngto(int a)
{
    if(a < 2) return 0;
    if(a <= 3) return 1;
    for(int i = 2; i<sqrt(a)+1 ; i++)
    {
        if(a% i ==0) return 0;
    }
    return 1;
}
