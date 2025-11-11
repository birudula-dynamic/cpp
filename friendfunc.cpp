#include <iostream>
using namespace std;
class Aditya {
private:
    int secret;
public:
    Aditya() : secret(42) {} // Constructor initializing private member
    // Declare friend function
    friend void revealSecret(Aditya obj);
};
// Friend function definition
void revealSecret(Aditya obj) {
    // Accessing private member directly
    cout << "The secret is: " << obj.secret << endl;
}
int main() {
    Aditya a;
    revealSecret(a); // Call the friend function
    return 0;
}

