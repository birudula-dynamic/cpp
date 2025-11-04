//Create a class Employee to count how many objects are created using a static variable.

#include <iostream>
using namespace std;

class Employee {
private:
    static int count;  // Static variable to keep track of object count
    int id;             // Example member variable

public:
    // Constructor
    Employee() {
        count++;  // Increment count whenever a new object is created
        id = count;
        cout << "Employee object created. ID: " << id << endl;
    }

    // Static function to get the count
    static int getCount() {
        return count;
    }
};

// Initialize static member outside the class
int Employee::count = 0;

int main() {
    Employee e1;
    Employee e2;
    Employee e3;

    cout << "Total Employee objects created: " << Employee::getCount() << endl;

    return 0;
}
