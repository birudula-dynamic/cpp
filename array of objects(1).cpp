#include <iostream>
using namespace std;

class Student {
    string name;
    int rollNo;
    float cgpa;

public:
    void setData(string n, int r, float c) {
        name = n;
        rollNo = r;
        cgpa = c;
    }

    void printData() {
        cout << "Name: " << name
             << ", Roll No: " << rollNo
             << ", CGPA: " << cgpa << endl;
    }

    float getCgpa() {
        return cgpa;
    }
};

// Function to create and return Student object
Student createStudent(string name, int roll, float cgpa) {
    Student s;
    s.setData(name, roll, cgpa);
    return s;
}

// Function to print student data
void printStudent(Student s) {
    s.printData();
}

// Function to get student with max CGPA
Student getMaxCgpa(Student s1, Student s2, Student s3) {
    Student max = s1;
    if (s2.getCgpa() > max.getCgpa()) max = s2;
    if (s3.getCgpa() > max.getCgpa()) max = s3;
    return max;
}

int main() {
    // Creating objects using createStudent
    Student st1 = createStudent("Alice", 101, 8.9);
    Student st2 = createStudent("Bob", 102, 9.2);
    Student st3 = createStudent("Charlie", 103, 8.5);

    cout << "All Students:\n";
    printStudent(st1);
    printStudent(st2);
    printStudent(st3);

    cout << "\nStudent with Maximum CGPA:\n";
    Student top = getMaxCgpa(st1, st2, st3);
    printStudent(top);

    return 0;
}

