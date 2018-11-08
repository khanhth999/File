#include<iostream>
#include<cmath>
using namespace std;
class Complex {
	friend ostream &operator<<(ostream& os, const Complex& v);
	
    double a, b;
public:
    Complex(double ta = 0, double tb = 0){
        this->a=ta;
        this->b=tb;
    };
    Complex operator+(const Complex& v) const{
        Complex c;
        c.a=this->a+v.a;
        c.b=this->b+v.b;
        return c;
    };
    Complex operator-(const Complex& v) const{
         Complex c;
        c.a=this->a-v.a;
        c.b=this->b-v.b;
        return c;
    };
    Complex operator*(const Complex& v) const{
        Complex c;
        c.a=((this->a)*(v.a))-((this->b)*(v.b));
        c.b=((this->a)*(v.b))+((v.a)*(this->b));
        return c;
    };
    Complex operator/(const Complex& v) const{
        Complex c;
        c.a=((((*this).a)*(v.a))+(((*this).b)*(v.b)))/(pow(v.a,2)+pow(v.b,2));
        c.b=(((v.a)*((*this).b))-(((*this).a)*(v.b)))/(pow(v.a,2)+pow(v.b,2));
        return c;
    };
    double modulus() const{
        double module;
        module=sqrt((this->a*this->a)+(this->b*this->b));
        return module;
    };
};

ostream& operator<<(ostream& os, const Complex& v){
        if(!(v.a==0 && v.b!=0))
            os << v.a;
        if(v.b!=0){
            if(v.b>0) os << "+";
            if(v.b==1){
                os << "i";
            }else if(v.b==-1){
                os << "-i";
            }else
            os << v.b << "i";
        }
    }

int  main(){
	Complex  x(3,4);
	cout<<x<<endl;
}
