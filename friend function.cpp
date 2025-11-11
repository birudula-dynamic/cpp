#include<iostream>
using namespace std;
class B;
class A{
	private:
		int a;
		public:
			void geta()
			{
				cout<<"enter a."<<endl;
				cin>>a;
			}
			friend void accept(A,B);
};
class B{
	private:
		int b;
		public:
			void getb(){
				cout<<"enter b."<<endl;
				cin>>b;
			}
			friend void accept(A,B);
};
void accept(A obj1, B obj2){
	cout<<"sum of 2 numbers:"<<obj1.a<<obj2.b<<endl;
}
int main(){
	A a1;
	B b1;
	a1.geta(),b1.getb();
	accept(a1,b1);
	return 0;
}

