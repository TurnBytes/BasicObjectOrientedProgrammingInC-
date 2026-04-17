#include <iostream>
using namespace std;

// Student_V6.cpp
// This version uses an object parameter in inputHandler().
// It demonstrates that a class can access private members of another object of the same class.

class Student{
    
    private:
        string name;
        int age;

    public:
        void nameAgeSetter(string student_name, int student_age){ // parameterized setter
            this->name = student_name;
            this->age = student_age;
        }

        void display(){ // display method prints the stored data
            cout << "Name: " << this->name << endl;
            cout << "Age: " << this->age << endl;
        }
        
        void inputHandler(Student obj){
            // The parameter is a copy of a Student object.
            // Input is stored in the copy, not directly in the current object.
            cout << "Enter Student Name: ";
            cin >> obj.name;

            cout << "Enter Student Age: ";
            cin >> obj.age;

            // Copy values from the temporary object into this object.
            this->nameAgeSetter(obj.name, obj.age);
        }
};

int main(){
    Student obj; // create a Student object

    // Pass obj by value into inputHandler.
    // This creates a copy inside the method.
    obj.inputHandler(obj);

    // Display the values stored in obj after inputHandler finishes.
    obj.display();
    return 0;
}