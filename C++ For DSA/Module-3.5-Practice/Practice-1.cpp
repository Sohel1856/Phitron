#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int roll;
    char section;
    int math_marks;

    // Constructor
    Student(string n, int r, char s, int m) {
        name = n;
        roll = r;
        section = s;
        math_marks = m;
    }
};

int main() {
    // Create three static objects using the constructor
    Student s1("Alice", 101, 'A', 85);
    Student s2("Bob", 102, 'B', 90);
    Student s3("Charlie", 103, 'C', 95);

    // Compare math_marks and find the student with the highest marks
    Student highest_marks_student = s1;
    if (s2.math_marks > highest_marks_student.math_marks) {
        highest_marks_student = s2;
    }
    if (s3.math_marks > highest_marks_student.math_marks) {
        highest_marks_student = s3;
    }

    // Print the name of the student with the highest math_marks
    cout << "Student with the highest math_marks: " << highest_marks_student.name << endl;

    return 0;
}
