#include<iostream>
using namespace std;
int number=10;
namespace  tanay{
	int value=30;
};
namespace  spurthi{
	int value=40;
}
int main(){
	cout<<"from tanay:"<<tanay::value<<endl;
	cout<<"from spurthi:"<<spurthi::value<<endl;
}
