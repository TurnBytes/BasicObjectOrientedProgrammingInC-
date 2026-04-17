#include <iostream>
using namespace std;

// Student_V3.cpp
// This version uses a parameterized setter method.
// It allows different values to be passed into the Student object.

class Student{
    
    private: // private data members are hidden from outside code
        string name;
        int age;

    public:
        void nameAgeSetter(string student_name, int student_age){ // parameterized setter method
            // The method receives values and stores them in the current object
            this->name = student_name;
            this->age = student_age;
        }

        void display(){ // display method prints the stored data
            cout << "Name: " << this->name << endl;
            cout << "Age: " << this->age << endl;
        }
};

int main(){
    // Create a Student object named obj
    Student obj;

    // Pass values to the setter so the object stores them
    obj.nameAgeSetter("Azhar", 19);

    // Display the current object's data
    obj.display();

    return 0;
}