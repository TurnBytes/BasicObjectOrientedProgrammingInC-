#include <iostream>
using namespace std;

// Student_V5.cpp
// This version moves input handling inside the Student class.
// It keeps main() clean and shows better separation of concerns.

class Student{
    
    private:
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
        
        void inputHandler(){
            // The class handles its own input, so main() remains simple.
            string student_name;
            int student_age;

            cout << "Enter Student Name: ";
            cin >> student_name;

            cout << "Enter Student Age: ";
            cin >> student_age;

            // Store the input values into this object
            this->nameAgeSetter(student_name, student_age);
        }
};

int main(){
    Student obj; // create a Student object

    // Let the object manage its own input
    obj.inputHandler();

    // Display the entered student details
    obj.display();

    return 0;
}