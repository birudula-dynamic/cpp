#include <iostream>
using namespace std;
class Kamesh {
 int length;
public:
 Kamesh(int l) : length(l) {}
 void showLength(Kamesh k) {
 cout << "Length: " << k.length << endl;
 }
};
int main() {
 Kamesh obj1(10), obj2(20);
 obj1.showLength(obj2); return 0;
 }
