#include <iostream>
using namespace std;

// Student_V2.cpp
// This version introduces a setter method.
// The Student data members are declared but not initialized until nameAgeSetter() is called.

class Student{
    
    private: // private data is not accessible outside the class
        string name;
        int age;

    public:
        void nameAgeSetter(){ // non-parameterized setter method
            // Here we set the data inside the class
            this->name = "Azhar";
            this->age = 19;
        }

        void display(){ // display method prints the stored data
            cout << "Name: " << this->name << endl;
            cout << "Age: " << this->age << endl;
        }
};

int main(){
    // Create a Student object named obj
    Student obj;

    // Initialize the object's private data by calling the setter method
    obj.nameAgeSetter();

    // Display the object's data
    obj.display();

    return 0;
}