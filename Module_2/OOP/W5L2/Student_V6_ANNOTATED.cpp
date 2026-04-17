#include <iostream>
using namespace std;

// This file documents Student_V6.cpp.
// It explains the new change, points out why it works, and highlights the design issue.

class Student {

    private: // access modifier/specifier
        string name;
        int age;

    public: // access modifier/specifier
        /**
         * Setter method with parameters.
         * This is the same setter style used in V3, V4, and V5.
         * It assigns values to the current object's private members.
         */
        void nameAgeSetter(string student_name, int student_age) {
            this->name = student_name;
            this->age = student_age;
        }

        /**
         * Display method.
         * It prints the object's private data to the console.
         */
        void display() {
            cout << "Name: " << this->name << endl;
            cout << "Age: " << this->age << endl;
        }

        /**
         * inputHandler(Student obj)
         * 
         * Purpose:
         *   - This method reads student input from the user.
         *   - It stores those values in the provided Student object copy.
         *   - Then it copies those values into the current object using the setter.
         * 
         * Important details:
         *   1. The parameter is declared as `Student obj`, which creates a copy.
         *   2. `obj.name` and `obj.age` are accessible here because this method is
         *      part of the Student class. A class method can access private members
         *      of any object of the same class.
         *   3. The values are read into the copy `obj`, not directly into `this`.
         *   4. `this->nameAgeSetter(obj.name, obj.age)` then transfers the copy into
         *      the current object.
         * 
         * Why this is not ideal:
         *   - The method takes an object parameter unnecessarily.
         *   - It uses a copy when the method could simply operate on `this`.
         *   - It is less clear than the V5 version where inputHandler has no parameter.
         * 
         * A better design would be:
         *   void inputHandler() { ... }
         * 
         * However, this version still works, and it demonstrates how the class
         * can access private data of another object of the same type.
         */
        void inputHandler(Student obj) {
            cout << "Enter Student Name: ";
            cin >> obj.name;  // Reads into the local copy

            cout << "Enter Student Age: ";
            cin >> obj.age;   // Reads into the local copy

            // Copy values from the local object copy into the current object.
            this->nameAgeSetter(obj.name, obj.age);
        }
};

int main() {
    Student obj; // instantiation or object creation

    // The parameter `obj` is passed by value into inputHandler.
    // That means inputHandler receives a copied Student object.
    obj.inputHandler(obj);

    // Display the current object's data.
    obj.display();
    return 0;
}

/*
================================================================================
ANALYSIS OF STUDENT_V6
================================================================================

What changed in V6:
- Added an inputHandler method that accepts a Student object parameter.
- Input is read into the parameter object copy.
- The setter is then used to transfer the values into the current object.

Why it still works:
- In C++, a member function can access private members of any other object of the same class.
- That means `obj.name` and `obj.age` are valid inside inputHandler.
- The current object (`this`) is updated afterward by calling nameAgeSetter.

Why this design is not recommended:
- `Student obj` in the parameter list creates an extra copy.
- The method should not need an object parameter at all.
- Input handling belongs to the current object, not a separate copy.
- It makes the code more confusing than V5.

Better design suggestion:
- Use `void inputHandler()` with no parameter.
- Read directly into local variables or into `this->name` and `this->age`.
- Then use the setter or assign directly.

Recommended replacement for V6:
    void inputHandler() {
        string student_name;
        int student_age;
        cout << "Enter Student Name: ";
        cin >> student_name;
        cout << "Enter Student Age: ";
        cin >> student_age;
        this->nameAgeSetter(student_name, student_age);
    }

This adjustment would make the version equal to V5 in design quality.

================================================================================
*/
