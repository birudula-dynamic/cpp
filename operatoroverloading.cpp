#include<iostream>
using namespace std;
class complex{
	private: int real, imag;
	public:complex(){
		real=0;
		imag=0;
	}
	complex( int r, int x){
		real=r;
		imag=x;
	}
	void display(){
		cout<<real<<"+"<<imag<<"i"<<endl;
			}
			complex operator+(complex& deep){
				complex temp;
				temp.real = real + deep.real;
				temp.imag = imag + deep.imag;
			}
};
int main(){
	complex obj1(2,3), obj2(8,6);
	complex obj3;
	obj3=obj1+obj2;
	obj1.display();
	obj2.display();
	obj3.display();
	return 0;
}
