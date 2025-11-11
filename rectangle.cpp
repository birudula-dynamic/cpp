#include <iostream>
using namespace std;
class CSE3 {
 int length, width;
public:
 CSE3(int l, int w) {
 length = l;
 width = w;
 cout << "Area: " << length * width << endl;
 }
};
int main() {
 CSE3 obj1(5, 3); 
 return 0; 
 }
