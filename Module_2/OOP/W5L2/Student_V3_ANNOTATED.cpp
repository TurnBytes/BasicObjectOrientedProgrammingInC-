/*
================================================================================
            STUDENT CLASS - VERSION 3: PARAMETRIZED SETTER (FLEXIBLE!)
================================================================================

Learning Objective:
  → Make setter methods ACCEPT PARAMETERS
  → Create truly flexible, reusable classes
  → THIS IS FIRST PRACTICAL VERSION
  → Multiple objects can have different data

What's New in V3:
  → Setter now has PARAMETERS
  → Can pass different values each time
  → Multiple objects can have unique data
  → First version that's actually useful!

Key Concepts:
  1. Method Parameters: Methods can accept input values
  2. Parameter Passing: Values passed when method is called
  3. Flexibility: Same method works for ANY data
  4. Reusability: One class works for unlimited objects

Improvement from V2:
  → Parameters make it FLEXIBLE (not hardcoded)
  → Can create multiple students with different data
  → Real-world usability begins here!

================================================================================
*/

#include <iostream>
using namespace std;

class Student {
    
    // ============== PRIVATE SECTION ==============
    private:
        string name;
        int age;
    
    
    // ============== PUBLIC SECTION ==============
    public:
        /*
        PARAMETRIZED SETTER METHOD: nameAgeSetter()
        
        Method Signature:
          void nameAgeSetter(string student_name, int student_age)
          
        Parameters:
          1. string student_name  - Parameter for student's name
          2. int student_age      - Parameter for student's age
          
        Purpose: Accept values PASSED BY CALLER and store in private members
        
        How Parameters Work:
          → Values are provided WHEN method is called
          → Example: obj.nameAgeSetter("Ali", 20);
          → "Ali" goes into parameter 'student_name'
          → 20 goes into parameter 'student_age'
          → These are LOCAL variables within the method
          
        Parameter Naming Convention:
          → Using 'student_name' and 'student_age' makes it CLEAR what they are
          → Helps readers understand what each parameter does
          → Better than vague names like 'n' or 'a'
        */
        void nameAgeSetter(string student_name, int student_age) {
            
            // Assign parameter values to private members
            // 'this->name' = member variable of THIS object
            // 'student_name' = parameter received from caller
            this->name = student_name;
            this->age = student_age;
        }

        /*
        GETTER METHOD: display()
        
        Same as V1 and V2 - just displays the data
        Now confident that data exists because setter was called with parameters
        */
        void display() {
            cout << "Name: " << this->name << endl;
            cout << "Age: " << this->age << endl;
        }
};

// ============== MAIN FUNCTION ==============
int main() {
    
    // ===== EXAMPLE 1: Create first student =====
    Student obj1;
    
    // Call setter with specific values for obj1
    // Passing: "Azhar" (name) and 19 (age)
    obj1.nameAgeSetter("Azhar", 19);
    
    cout << "Student 1:" << endl;
    obj1.display();
    
    /*
    Output:
    Student 1:
    Name: Azhar
    Age: 19
    */
    
    
    // ===== EXAMPLE 2: Create second student with DIFFERENT data =====
    Student obj2;
    
    // SAME method, but DIFFERENT values!
    // Passing: "Fatima" (name) and 20 (age)
    // obj2 has DIFFERENT data than obj1
    obj2.nameAgeSetter("Fatima", 20);
    
    cout << "\nStudent 2:" << endl;
    obj2.display();
    
    /*
    Output:
    Student 2:
    Name: Fatima
    Age: 20
    */
    
    
    // ===== EXAMPLE 3: Create third student with YET ANOTHER data =====
    Student obj3;
    obj3.nameAgeSetter("Hassan", 21);
    
    cout << "\nStudent 3:" << endl;
    obj3.display();
    
    /*
    Output:
    Student 3:
    Name: Hassan
    Age: 21
    */
    
    /*
    COMPLETE OUTPUT:
    Student 1:
    Name: Azhar
    Age: 19
    
    Student 2:
    Name: Fatima
    Age: 20
    
    Student 3:
    Name: Hassan
    Age: 21
    
    OBSERVATION:
    → Same class, same methods, but DIFFERENT data for each object
    → This is the power of PARAMETERS
    → This is TRUE OBJECT-ORIENTED PROGRAMMING
    */
    
    return 0;
}

/*
================================================================================
                              ANALYSIS
================================================================================

WHAT CHANGED FROM V2:
────────────────────────────────────────────────────────────────────────────────
| Aspect              | V2                      | V3                            |
|─────────────────────|────────────────────────|──────────────────────────────|
| Setter Parameters   | None (hardcoded)       | Accepts parameters ✓         |
| Data Flexibility    | None - hardcoded       | FULL - any values ✓          |
| Multiple Objects    | All have same data     | Each can have different ✓    |
| Reusability         | Low                    | HIGH ✓                       |
| Practical Use       | Teaching only          | PRODUCTION READY ✓           |
────────────────────────────────────────────────────────────────────────────────

STRENGTHS:
✓ TRULY FLEXIBLE - any values can be passed
✓ Multiple objects can have different data
✓ Same method works for unlimited scenarios
✓ FIRST PRACTICAL VERSION
✓ Professional OOP concept
✓ Shows power of parameters
✓ Code is reusable and extensible

LIMITATIONS:
✗ Data values must be provided in main()
✗ main() function contains input/data logic (mixed concerns)
✗ Input handling NOT in class (separation of concerns issue)
✗ If multiple students needed, a lot of code in main()

WHEN TO USE THIS APPROACH:
✓ When data comes from another source (not user input)
✓ When you have hardcoded test data
✓ Educational purposes showing parametrized setters
✓ When input is handled by different layer

REAL-WORLD EXAMPLE:
→ Loading student data from a DATABASE
→ Database provides name and age
→ Pass to setter: obj.nameAgeSetter(db_name, db_age)
→ Class doesn't need to know WHERE data came from

IMPORTANT CONCEPT: PARAMETER PASSING
────────────────────────────────────────────────────────────────────────────────
When you call: obj.nameAgeSetter("Azhar", 19)
                                   ↓        ↓
                                 "Azhar"   19
                                   ↓        ↓
Method receives:               student_name, student_age
And executes:
    this->name = student_name;      // this->name = "Azhar"
    this->age = student_age;         // this->age = 19

This is how VALUES flow from caller into the method!

NEXT STEP (V4):
→ Get values from USER INPUT (keyboard)
→ Use cin to read from console
→ Pass input to setter method
→ main() will have user prompts

================================================================================
*/
