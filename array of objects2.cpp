#include <iostream>
using namespace std;
class Aditya {
 int roll;
public:
 void getData(int r) { roll = r; }
 void showData() { cout << "Roll: " << roll << endl; }
};
int main() {
 Aditya obj1[3];
 for(int i=0; i<3; i++) obj1[i].getData(i+1);
 for(int i=0; i<3; i++) obj1[i].showData(); return 0; 
 }
