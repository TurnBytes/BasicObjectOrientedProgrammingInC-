#include <iostream>
using namespace std;

// Student_V1.cpp
// This is the first version in a learning progression.
// It shows a simple Student class with hardcoded values.
// This version teaches basic class structure and encapsulation.

class Student{
    
    private: // private members are hidden from code outside the class
        string name = "Azhar"; // Default name is hardcoded here
        int age = 19;           // Default age is hardcoded here

    public: // public members are accessible outside the class
        void display(){ // simple display method to print private data
            cout << "Name: " << this->name << endl;
            cout << "Age: " << this->age << endl;
        }
};

int main(){
    // Create a Student object named obj
    Student obj;

    // obj.name would be invalid here because name is private.
    // Instead, use the public display() method to access private data.
    obj.display();

    return 0;
}