#include <iostream>
using namespace std;

class Student {
public:
    int *marks;

    // Constructor
    Student(int m) {
        marks = new int(m);
    }

    // Shallow Copy Constructor
    Student(Student &s) {
        marks = s.marks;   // same address
    }

    void show() {
        cout << "Marks: " << *marks << endl;
    }
};

int main() {
    Student s1(80);
    Student s2 = s1;   // shallow copy

    *s1.marks = 95;    // change via s1

    s1.show();  // 95
    s2.show();  // 95 (also changed!)

    return 0;
}
 