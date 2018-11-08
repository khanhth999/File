#include<iostream>
using namespace std;
class BMI{
	public:
		float cao,nang;
	BMI(float cao,float nang)
	{
		this->cao=cao;
		this->nang=nang;
	}
	void nhap(){
		float cao,nang;
		cin>>cao>>nang;
		this->cao=cao;
		this->nang=nang;
	}
	float tinh(){
		return cao+nang;
	}
};
int main()
{
	BMI
}
