#include<iostream>
using namespace std;
class student{
	private:
		int s_id;
		char name[20];
		char branch[20];
		private:
			void bharadwaj(){
				cin>>s_id;
				cin>>name;
				cin>>branch;
			}
			public:
			  void ganesh(){
				bharadwaj();
				cout<<"student details!!!"<<endl;
				cout<<"student id:"<<s_id<<endl;
				cout<<"student name:"<<name<<endl;
				cout<<"student branch:"<<branch<<endl;
			}
};
int main(){
	student s;
	s.ganesh();
}
