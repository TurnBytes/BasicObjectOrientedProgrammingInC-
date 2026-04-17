#include <iostream>
using namespace std;

// Student_V4.cpp
// This version introduces user input in main().
// It demonstrates how to read data with cin and pass it to the class.

class Student{
    
    private: // private members cannot be accessed directly from outside
        string name;
        int age;

    public:
        void nameAgeSetter(string student_name, int student_age){ // parameterized setter method
            this->name = student_name;
            this->age = student_age;
        }

        void display(){ // display method prints the student's information
            cout << "Name: " << this->name << endl;
            cout << "Age: " << this->age << endl;
        }
};

int main(){
    Student obj; // create a Student object

    // Read student data from the user
    string student_name;
    int student_age;

    cout << "Enter Student Name: ";
    cin >> student_name;

    cout << "Enter Student Age: ";
    cin >> student_age;

    // Pass the user input into the object's setter method
    obj.nameAgeSetter(student_name, student_age);

    // Display the student details stored inside the object
    obj.display();

    return 0;
}