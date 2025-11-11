#include<iostream>
using namespace std;
class employee{
	private: 
	int e_id;
	char name[30];
	int sal;
	public:
	void get(){
		cin>>e_id;
		cin>>name;
		cin>>sal;
		show();
		}
			private:
	void show(){
		cout<<"employee details!!!"<<endl;
		cout<<"employee id:"<<e_id<<endl;
		cout<<"employee name:"<<name<<endl;
		cout<<"employee salary:"<<sal;
	}
};
int main(){
	employee e;
	e.get();
	
}
