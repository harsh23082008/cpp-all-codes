#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string first_name;
    string last_name;
    string tuition;
};

int main() {
    Student student_1;
    student_1.first_name = "Jane";
    student_1.last_name  = "Smith";
    student_1.tuition    = "30000";

    Student student_2;
    student_2.first_name = "John";
    student_2.last_name  = "Doe";
    student_2.tuition    = "15000";

    cout << "Student 1 Details:" << endl;
    cout << "First Name: " << student_1.first_name << endl;
    cout << "Last Name : " << student_1.last_name << endl;
    cout << "Tuition   : " << student_1.tuition << endl;

    cout << endl;

    cout << "Student 2 Details:" << endl;
    cout << "First Name: " << student_2.first_name << endl;
    cout << "Last Name : " << student_2.last_name << endl;
    cout << "Tuition   : " << student_2.tuition << endl;

    return 0;
}
