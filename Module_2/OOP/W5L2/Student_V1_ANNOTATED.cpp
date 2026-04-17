/*
================================================================================
                   STUDENT CLASS - VERSION 1: BASIC ENCAPSULATION
================================================================================

Learning Objective:
  → Understand how to create a class with private and public members
  → Learn how objects encapsulate data
  → Practice using access modifiers (private/public)

What This Program Does:
  → Creates a Student class with hardcoded member data
  → Demonstrates hiding data with private access modifier
  → Shows how to access private data through public methods

Key Concepts:
  1. Encapsulation: Data is protected in private section
  2. Access Modifiers: private (hidden), public (visible)
  3. Object Creation: Instantiating a class
  4. Getter Method: Method to retrieve/display data
  
Prerequisites:
  → Know what a class is
  → Understand data types (string, int)
  → Know how cout works

================================================================================
*/

#include <iostream>
using namespace std;

// This comment reminds us that this is a LEARNING PROGRESSION
//on how we can approach a problem with different strategy--some might be good and some might not..

class Student {
    
    // ============== PRIVATE SECTION ==============
    // Private members are HIDDEN - cannot be accessed outside the class
    // This is the core of ENCAPSULATION
    private:
        string name = "Azhar";      // Private member with DEFAULT initial value
        int age = 19;               // Private member with DEFAULT initial value
    
    
    // ============== PUBLIC SECTION ==============
    // Public members are VISIBLE - can be accessed outside the class
    // We provide PUBLIC METHODS to interact with PRIVATE DATA
    public:
        /*
        GETTER METHOD: display()
        
        Purpose: Display (retrieve and show) the private data
        Parameters: NONE (non-parametrized method)
        Return Type: void (doesn't return anything, just prints)
        
        How it works:
          → Uses 'this->name' to access the current object's name
          → Uses 'this->age' to access the current object's age
          → Prints these values to console using cout
          
        Why separate method?
          → Cannot access private data directly outside class
          → This method acts as a BRIDGE between private data and outside world
          → Protects data integrity
        */
        void display() {
            // 'this' is a pointer to the current object
            // 'this->name' means "the name member of THIS object"
            cout << "Name: " << this->name << endl;
            cout << "Age: " << this->age << endl;
        }
};

// ============== MAIN FUNCTION ==============
int main() {
    
    // Object Creation (Instantiation):
    // Creates new Student object called 'obj'
    // All private members initialized with their default values
    // obj.name = "Azhar" (default value)
    // obj.age = 19 (default value)
    Student obj;
    
    // ❌ THIS WOULD CAUSE ERROR (compile time):
    // cout << obj.name;  // ERROR! 'name' is private, cannot access outside class
    
    // ✓ THIS WORKS:
    // We call the PUBLIC method display() to access PRIVATE data
    // Use DOT OPERATOR (.) to call method on object
    obj.display();
    
    /*
    Expected Output:
    Name: Azhar
    Age: 19
    */
    
    return 0;
}

/*
================================================================================
                              ANALYSIS
================================================================================

STRENGTHS:
✓ Clear demonstration of access modifiers
✓ Shows basic encapsulation concept
✓ Simple and easy to understand for beginners
✓ Demonstrates object creation

LIMITATIONS:
✗ Data is HARDCODED in class definition
✗ ALL objects have same data (Azhar, 19)
✗ Cannot create student with different name/age
✗ Need to modify code to test with different data
✗ Not practical for real applications

WHEN TO USE THIS APPROACH:
→ Teaching only: Understanding classes and access modifiers
→ NOT recommended for real projects

NEXT STEP (V2):
→ Learn how to SET data through methods (Setter methods)
→ Move hardcoded values out of class definition
→ Separate declaration from initialization

================================================================================
*/
