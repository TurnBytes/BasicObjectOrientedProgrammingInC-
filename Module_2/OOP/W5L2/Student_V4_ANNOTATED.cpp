/*
================================================================================
         STUDENT CLASS - VERSION 4: USER INPUT IN MAIN FUNCTION
================================================================================

Learning Objective:
  → Learn how to get USER INPUT from keyboard
  → Understand cin for reading input
  → Connect user input to object methods
  → Make program INTERACTIVE

What's New in V4:
  → Program gets input from USER (cin)
  → Values are typed during RUNTIME
  → Program responds to what user enters
  → Interactive and dynamic

Key Concepts:
  1. User Input: Getting data from keyboard using cin
  2. Interactive Programs: Program behavior depends on input
  3. Local Variables: Variables to store user inputs
  4. Input-to-Object Flow: user input → local var → setter method

Improvement from V3:
  → Program is now INTERACTIVE
  → Users can enter any data they want
  → Different runs produce different results
  → Much more practical!

LIMITATION TO NOTICE:
  → Input logic is in main() function
  → Mixing concerns: main does input AND object management
  → This will be improved in V5!

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
        PARAMETRIZED SETTER: Same as V3
        
        This method hasn't changed - it still accepts parameters
        and assigns them to private members
        */
        void nameAgeSetter(string student_name, int student_age) {
            this->name = student_name;
            this->age = student_age;
        }

        /*
        GETTER METHOD: Same as V3
        
        Displays the private data
        */
        void display() {
            cout << "Name: " << this->name << endl;
            cout << "Age: " << this->age << endl;
        }
};

// ============== MAIN FUNCTION ==============
int main() {
    
    // Step 1: Create the Student object
    Student obj;
    
    // ===== NEW IN V4: USER INPUT HANDLING =====
    
    /*
    STEP 2: Declare LOCAL VARIABLES to store user input
    
    Local Variables:
    → Created in main() function
    → Only exist while main() is running
    → Used to temporarily store user input
    → Then passed to object setter
    
    These are NOT member variables of Student class
    These are temporary storage in main()
    */
    string student_name;    // Will hold name entered by user
    int student_age;        // Will hold age entered by user
    
    
    /*
    STEP 3: Prompt user and get INPUT for name
    
    cout << "Enter Student Name: ";
    → Displays a message asking for name
    
    cin >> student_name;
    → WAITS for user to type something
    → Reads what user typed
    → Stores it in variable 'student_name'
    → The >> operator means "READ FROM"
    
    INPUT STREAM (cin):
    keyboard input → cin → variables
    */
    cout << "Enter Student Name: ";
    cin >> student_name;        // Wait for user input, store in student_name
    
    
    /*
    STEP 4: Prompt user and get INPUT for age
    
    Similar to name input:
    → Display prompt
    → cin reads number from keyboard
    → Stores in student_age
    */
    cout << "Enter Student Age: ";
    cin >> student_age;         // Wait for user input, store in student_age
    
    
    /*
    STEP 5: Pass user input to object setter
    
    Now we have:
    → student_name = what user typed (e.g., "Azhar")
    → student_age = what user typed (e.g., 19)
    
    Pass these to setter method:
    */
    obj.nameAgeSetter(student_name, student_age);
    
    
    /*
    STEP 6: Display the result
    */
    obj.display();
    
    /*
    COMPLETE PROGRAM FLOW:
    ─────────────────────────────────────────────────────────────────
    Start
      ↓
    Create Student object
      ↓
    Ask user for name
      ↓
    Read from keyboard (cin) → store in student_name
      ↓
    Ask user for age
      ↓
    Read from keyboard (cin) → store in student_age
      ↓
    Pass both to obj.nameAgeSetter(student_name, student_age)
      ↓
    Call obj.display()
      ↓
    End
    ─────────────────────────────────────────────────────────────────
    
    EXAMPLE EXECUTION:
    
    [Program Output]
    Enter Student Name: Azhar
    [User Types: Azhar and presses Enter]
    
    Enter Student Age: 19
    [User Types: 19 and presses Enter]
    
    Name: Azhar
    Age: 19
    */
    
    return 0;
}

/*
================================================================================
                              ANALYSIS
================================================================================

WHAT CHANGED FROM V3:
────────────────────────────────────────────────────────────────────────────────
| Aspect              | V3                    | V4                             |
|─────────────────────|──────────────────────|────────────────────────────────|
| Data Source         | Hardcoded in code    | User keyboard input ✓          |
| Interactivity       | Static/Automatic     | Interactive ✓                  |
| Runtime Behavior    | Same every time      | Different per user input ✓     |
| Input Location      | In main()            | In main()                      |
| Flexibility         | Good                 | Excellent ✓                    |
────────────────────────────────────────────────────────────────────────────────

STRENGTHS:
✓ Program is now INTERACTIVE
✓ Users can input any data they want
✓ Different runs with different results
✓ Practical for real applications
✓ Demonstrates cin/cout I/O
✓ Shows input-to-object flow

LIMITATIONS:
✗ Input handling logic is IN main() function
✗ Mixing concerns: main handles I/O AND object creation
✗ If we had many fields, main() gets cluttered with input code
✗ Input logic not ENCAPSULATED in class
✗ Violates "Separation of Concerns" principle
✗ Difficult to reuse input logic

SEPARATION OF CONCERNS PROBLEM:
────────────────────────────────────────────────────────────────────────────
Current (V4 - POOR):

    main()
    {
        // Input logic
        string student_name;
        int student_age;
        cout << "Enter name: ";
        cin >> student_name;
        cout << "Enter age: ";
        cin >> student_age;
        
        // Object management
        Student obj;
        obj.nameAgeSetter(student_name, student_age);
        obj.display();
    }

Problems:
→ main() is doing TWO things: INPUT and OBJECT MANAGEMENT
→ Violates "Single Responsibility Principle"
→ Hard to test input separately
→ Hard to reuse input logic

Better (V5 - GOOD):

    main()
    {
        Student obj;
        obj.inputHandler();    // ONE line! Class handles input
        obj.display();
    }

Benefits:
→ main() is CLEAN and SIMPLE
→ Class has full responsibility
→ Input logic is REUSABLE
→ Easy to understand at a glance

WHEN TO USE V4:
→ Educational: Learning user input concepts
→ Simple programs with minimal input
→ When input comes from multiple sources (not from user)

WHEN NOT TO USE V4:
✗ Professional applications
✗ Programs with many input fields
✗ Code that needs to be maintainable
✗ When you want clean, reusable code

NEXT STEP (V5):
→ Move INPUT HANDLING into the CLASS
→ Create inputHandler() method in Student class
→ Keep main() clean and simple
→ THIS IS PROFESSIONAL OOP DESIGN!

KEY CONCEPT: CIN (INPUT STREAM)
────────────────────────────────────────────────────────────────────────────
cin >> variable    reads data from keyboard
                   waits for user input
                   stores in variable

Example:
    string name;
    cin >> name;
    
Execution:
    1. Program pauses at cin >>
    2. User types something (e.g., "Ali")
    3. User presses Enter
    4. Value stored in 'name' variable (name = "Ali")
    5. Program continues

OUTPUT STREAM (cout):
────────────────────────────────────────────────────────────────────────────
cout << "text"    sends text to console/screen
cout << variable  sends variable value to console

cout << "Enter name: " << endl;
→ Displays prompt, then moves to new line

================================================================================
*/
