#include <iostream>
using namespace std;

// Function with default arguments
void displayMessage(string name = "Student", int age = 18) {
    cout << "Name: " << name << ", Age: " << age << endl;
}

int main() {
    // Call with both arguments
    displayMessage("Tanay", 20);

    // Call with only one argument (age will take default value)
    displayMessage("Aditya");

    // Call with no arguments (both will take default values)
    displayMessage();

    return 0;
}

