#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

void printResult(double value)
{
	if (value == (int)value)
	{
		cout << fixed <<setprecision(0) << value;
	}
	else if (value * 10 == (int)value * 10)
	{
		cout <<fixed<< setprecision(1) << value;
	}
	else
	{
		cout <<fixed<< setprecision(2) << value;
	}
}

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	
	double denta = b * b - 4 * a * c;
	if (denta < 0)
	{
		double real = -b / 2 * a;
		double fake1 = -sqrt(-denta) / (2 * a);
		double fake2 = sqrt(-denta) / (2 * a);
		printResult(real); cout << " "; printResult(fake1); cout << endl;
		printResult(real); cout << " "; printResult(fake2); cout << endl;
		/*cout << real << " " << fake1 << endl;
		cout << real << " " << fake2 << endl;*/
	}
	else if (denta == 0)
	{
		double nghiem = -b / 2 * a;
		printResult(nghiem);
	}
	else
	{
		double nghiem1 = (-b - sqrt(denta)) / (2 * a);
		double nghiem2 = (-b + sqrt(denta)) / (2 * a);
		printResult(nghiem1); cout << endl; printResult(nghiem2);
		//cout << nghiem1 << endl << nghiem2;
	}
	//system("pause");
	return 0;
}
