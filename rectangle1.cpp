#include<iostream>
using namespace std;
class rectangle{
		int length,width;
	public:
		rectangle(int l, int w){
			length=l;
			width=w;
			cout<<"area:"<<length*width<<endl;
		}
};
int main(){
	rectangle obj1(5, 3);
	return 0;
}
