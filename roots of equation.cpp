#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float a,b,c;
	cout<<"Enter a,b,c values ";
	cin>>a>>b>>c;
	float d=b*b-4*a*c;
	if(d>=0){
		cout<<"root 1 is "<<(-b-sqrt(d))/2*a<<endl;
		cout<<"root 2 is "<<(-b+sqrt(d))/2*a<<endl;
	}
	else{
		cout<<"No roots";
	}
	if(d>=0){
		cout<<"the roots are real and equal!"<<endl;
	}
	else{
		cout<<"the roots are imaginary!"<<endl;
	}
	return 0;
}
