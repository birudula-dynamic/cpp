#include<iostream>
using namespace std;
class aditya{
	public:
	int a;
	public:
		aditya(int x){ //this is normal instructor
			a=x;
		}
		aditya(aditya &obj){  //this is copy instructor
			a=obj.a;
		}
};
int main(){
	aditya obj1(10); //calls normal instructor
	aditya obj2=obj1; //calls copy instructor
	cout<<obj2.a;
	return 0;
}
