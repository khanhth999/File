#include<iostream>
using namespace std;
class Fraction {
	int a,b;
	public:
		Fraction(int a=1, int b=1){
		this->a=a;
       	this->b=b;
		};
		friend ostream& operator<<(ostream& os, const Fraction& f){
			os<<f.a<<"/"<<f.b;
		}
		Fraction operator+(const Fraction& f ) const
		{
		Fraction c;
        c.a=this->a*f.b+this->b*f.a;
        c.b=this->b*f.b;
        return c;
		};
		Fraction operator-(const Fraction& f ) const
		{
		Fraction c;
        c.a=this->a*f.b-this->b*f.a;
        c.b=this->b*f.b;
        return c;
		};
		Fraction operator*(const Fraction& f ) const
		{
		Fraction c;
        c.a=this->a*f.a;
        c.b=this->b*f.b;
        return c;
		};
		Fraction operator/(const Fraction& f ) const
		{
		Fraction c;
        c.a=this->a*f.b;
        c.b=this->b*f.a;
        return c;
		};
		void simplify();
		bool operator>(const Fraction& f) const{
		return true;
		}
		bool operator<(const Fraction& f) const{
		return true;
		}
};
int main()
{
	Fraction x(2,3);
	Fraction y(3,4);
	cout<<x+y<<endl;
	cout<<x-y<<endl;
	cout<<x*y<<endl;
	cout<<x/y<<endl;
	
	
}
