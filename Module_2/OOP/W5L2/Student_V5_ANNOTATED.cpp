/*
================================================================================
        STUDENT CLASS - VERSION 5: INPUT HANDLER INSIDE CLASS (BEST!)
================================================================================

Learning Objective:
  → Learn PROFESSIONAL OOP design
  → Understand "Separation of Concerns" principle
  → Encapsulate INPUT LOGIC inside the class
  → Write clean, maintainable, professional code

What's New in V5:
  → inputHandler() method INSIDE class
  → Class handles ALL its own operations
  → Input logic is ENCAPSULATED
  → main() function is CLEAN and SIMPLE
  → THIS IS THE PROFESSIONAL APPROACH!

Key Concepts:
  1. Encapsulation of Logic: Not just data, but behavior too
  2. Separation of Concerns: Each part has one responsibility
  3. Single Responsibility Principle: Class manages students
  4. Clean API: Simple interface for users of the class
  5. Reusability: Input logic can be reused easily

Improvement from V4:
  → Input logic moved into class
  → main() is much simpler
  → Class is now SELF-CONTAINED
  → Professional code structure
  → Easy to test and maintain
  → BEST PRACTICE APPROACH

THIS IS THE VERSION TO EMULATE!

================================================================================
*/

#include <iostream>
using namespace std;

/**
 * CLASS: Student
 * 
 * Purpose: Represent a student with name and age
 * Responsibility: Handle student data AND student input
 * 
 * Design Pattern: ENCAPSULATION OF BEHAVIOR
 * - Data is private and protected
 * - Methods handle all operations on that data
 * - Input is handled internally, not externally
 * 
 * This is a SELF-CONTAINED, REUSABLE class
 */
class Student {
    
    // ============== PRIVATE SECTION ==============
    private:
        /**
         * DATA MEMBERS (private)
         * 
         * Encapsulated data:
         * - Cannot be accessed from outside
         * - Can only be modified through public methods
         * - Protected from accidental misuse
         */
        string name;
        int age;
    
    
    // ============== PUBLIC SECTION ==============
    public:
        
        /*
        SETTER METHOD: nameAgeSetter()
        
        Purpose: Set the private member variables
        Parameters: 
          - string student_name: The name to set
          - int student_age: The age to set
        Return Type: void
        
        This method allows controlled, validated access to setting data
        (We could add validation here in future versions)
        
        Why a separate setter?
        → Encapsulation: Controlled access to data
        → Validation: Could add checks (e.g., age >= 0)
        → Maintenance: Change implementation without affecting usage
        */
        void nameAgeSetter(string student_name, int student_age) {
            this->name = student_name;
            this->age = student_age;
        }

        
        /*
        GETTER METHOD: display()
        
        Purpose: Display (print) the student's information
        Parameters: None
        Return Type: void
        
        Shows all student data in formatted way
        Only reads data, doesn't modify it
        */
        void display() {
            cout << "Name: " << this->name << endl;
            cout << "Age: " << this->age << endl;
        }
        
        
        /*
        ========== NEW IN V5: INPUT HANDLER METHOD ==========
        
        INPUT HANDLER: inputHandler()
        
        Purpose: Handle ALL INPUT-RELATED OPERATIONS for a student
        Parameters: None (gets input directly from user)
        Return Type: void
        
        Responsibilities:
        1. Prompt user for input
        2. Read input from keyboard
        3. Validate/process input (if needed)
        4. Call setter to store data
        
        KEY INSIGHT:
        → Encapsulates the INPUT LOGIC inside the class
        → main() doesn't need to know HOW input works
        → main() just calls inputHandler() and it "just works"
        → This is ABSTRACTION - hiding complexity
        
        Why is this better than V4?
        ─────────────────────────────────────────────────────────
        V4 (Poor Design):
            main() knows about:
            - User prompts
            - cin operations
            - Variable declarations
            - Setter calling
            
        V5 (Good Design):
            main() only knows:
            - Call inputHandler()
            - Call display()
            
        The Student class handles all the complexity!
        ─────────────────────────────────────────────────────────
        
        SEPARATION OF CONCERNS:
        → Student class is responsible for student operations
        → Not main()'s responsibility to handle student input
        → Each part of code has ONE clear purpose
        → Easy to understand, test, and maintain
        */
        void inputHandler() {
            
            /*
            LOCAL VARIABLES: For temporary storage during input
            
            These are temporary storage for reading from keyboard
            Then passed to setter to permanent member variables
            
            Scope: Only exist within this method
            Lifetime: Exist during method execution, destroyed when method ends
            */
            string student_name;
            int student_age;
            
            
            /*
            STEP 1: Get name from user
            
            cout << "..." displays prompt
            cin >> ... reads input from keyboard
            
            Execution:
            1. Display prompt
            2. Wait for user to type name
            3. When user presses Enter, store in student_name
            4. Continue to next line
            */
            cout << "Enter Student Name: ";
            cin >> student_name;
            
            
            /*
            STEP 2: Get age from user
            
            Same process:
            1. Display prompt asking for age
            2. Wait for user input
            3. Store in student_age variable
            */
            cout << "Enter Student Age: ";
            cin >> student_age;
            
            
            /*
            STEP 3: Store the input in the object
            
            Now we have the values, pass them to setter
            This updates the private members of THIS object
            
            Using 'this->nameAgeSetter()' clarifies we're calling
            our own class method, not an external function
            */
            this->nameAgeSetter(student_name, student_age);
        }
};

// ============== MAIN FUNCTION ==============
int main() {
    
    /*
    LOOK HOW SIMPLE main() IS NOW!
    
    Compare to V4:
    ─────────────
    V4 had:
    - Variable declarations
    - Multiple cout statements
    - Multiple cin statements
    - Setter call
    
    V5 has:
    - Object creation
    - ONE method call: inputHandler()
    - Display call
    
    That's it! Clean and simple!
    */
    
    // Step 1: Create Student object
    Student obj;
    
    // Step 2: Handle all student input operations
    // ONE LINE - the class handles everything internally
    // No need for variable declarations, prompts, cin calls in main
    obj.inputHandler();
    
    // Step 3: Display the result
    obj.display();
    
    /*
    PROGRAM FLOW:
    ──────────────────────────────────────────────────────────────
    main() starts
      ↓ Create Student object (obj)
      ↓ Call obj.inputHandler()
      ↓   [INSIDE inputHandler]:
      ↓     Ask for name
      ↓     Read name from keyboard
      ↓     Ask for age
      ↓     Read age from keyboard
      ↓     Call setter to store data
      ↓   [END inputHandler]
      ↓ Call obj.display()
      ↓   [INSIDE display]:
      ↓     Print name and age
      ↓   [END display]
      ↓ main() ends
    ──────────────────────────────────────────────────────────────
    
    EXAMPLE EXECUTION:
    
    [Program output]:
    Enter Student Name: Azhar
    [User types: Azhar and presses Enter]
    
    Enter Student Age: 19
    [User types: 19 and presses Enter]
    
    Name: Azhar
    Age: 19
    [Program ends]
    
    NOTICE: main() has ONLY 4 lines of logic
    All complexity is HIDDEN inside the class
    This is PROFESSIONAL CODE!
    */
    
    return 0;
}

/*
================================================================================
                              ANALYSIS
================================================================================

WHAT CHANGED FROM V4:
────────────────────────────────────────────────────────────────────────────────
| Aspect              | V4                    | V5                             |
|─────────────────────|──────────────────────|────────────────────────────────|
| Input Location      | In main()             | Inside class ✓                 |
| main() Code Lines   | ~12 lines             | ~4 lines ✓                     |
| Input Logic         | Scattered in main()   | Encapsulated ✓                 |
| Separation Concerns | Poor (mixed)          | Excellent ✓                    |
| Reusability         | Medium                | HIGH ✓                         |
| Professional        | Good (but mixed)      | Excellent ✓                    |
| Maintainability     | Fair                  | Excellent ✓                    |
────────────────────────────────────────────────────────────────────────────────

STRENGTHS (THIS IS THE BEST VERSION):
✓ main() is CLEAN and SIMPLE (only ~4 lines)
✓ Encapsulation of INPUT logic (not just data)
✓ High reusability (inputHandler can be called anywhere)
✓ Separation of concerns (class handles class operations)
✓ Single responsibility (Student class = student operations)
✓ Professional code structure
✓ Easy to understand at a glance
✓ Easy to test: can test inputHandler separately
✓ Easy to extend: can add more methods without affecting main
✓ Follows POP principle (Principle of Least Privilege)
✓ main() doesn't need to know implementation details

PROFESSIONAL CODE BENEFITS:
────────────────────────────────────────────────────────────────────────────────

1. ABSTRACTION
   → main() doesn't know HOW inputHandler works
   → main() only knows WHAT inputHandler does
   → Implementation detail is hidden
   → Can change How without affecting Who calls it
   
2. ENCAPSULATION
   → Input logic is contained in class
   → Not scattered in main()
   → Easy to maintain
   → Easy to find where input is handled

3. REUSABILITY
   → inputHandler() can be called multiple times
   → Can create multiple students with same logic
   → Logic written once, used multiple times
   → No code duplication

4. TESTABILITY
   → Can test Student class separately from main
   → Can test inputHandler in isolation
   → Don't need to run whole program to test

5. MAINTAINABILITY
   → If input requirements change, change only inputHandler()
   → Don't need to modify main() or display()
   → Changes are localized
   → Less risk of breaking other parts

DESIGN PATTERN: SEPARATION OF CONCERNS
────────────────────────────────────────────────────────────────────────────────

POOR DESIGN (V4):
┌─────────────────────────────────────┐
│         main() function             │
├─────────────────────────────────────┤
│ • Input prompts                     │
│ • Input reading (cin)               │
│ • Variable declarations             │
│ • Object creation                   │
│ • Setter calling                    │
│ • Display calling                   │
└─────────────────────────────────────┘

TOO MANY RESPONSIBILITIES!

GOOD DESIGN (V5):
┌──────────────────────────────────────────────────────────┐
│         main() function (SIMPLE & CLEAN)                 │
├──────────────────────────────────────────────────────────┤
│ • Create object                                          │
│ • Call inputHandler()                                    │
│ • Call display()                                         │
└──────────────────────────────────────────────────────────┘

┌──────────────────────────────────────────────────────────┐
│         Student Class (SELF-CONTAINED)                   │
├──────────────────────────────────────────────────────────┤
│ • nameAgeSetter() - manages data                         │
│ • display() - shows data                                 │
│ • inputHandler() - handles input                         │
└──────────────────────────────────────────────────────────┘

Each has ONE clear purpose!

WHEN TO USE V5 (ALWAYS USE THIS FOR NEW CODE):
✓ Professional applications
✓ Maintenance-critical code
✓ Team projects where others read your code
✓ Code that needs to be tested

WHEN NOT TO USE: Never - this is always the best approach!

DESIGN PRINCIPLE: SINGLE RESPONSIBILITY PRINCIPLE (SRP)
────────────────────────────────────────────────────────────────────────────────

Definition: Each component should have ONE reason to change

V5 follows SRP:
→ Student class changes only if STUDENT logic changes
→ main() changes only if PROGRAM FLOW changes
→ Changes are isolated and don't affect other parts

V4 violated SRP:
→ main() had to change if INPUT logic changed
→ main() had to change if OBJECT logic changed
→ Multiple reasons for main() to change

SRP IS ESSENTIAL for:
• Maintainable code
• Parallel development
• Code reuse
• Testing
• Professional projects

ANTI-PATTERN ALERT:
────────────────────────────────────────────────────────────────────────────────

❌ V1-V4 mistakes to NEVER repeat:

1. Putting everything in main()
2. Hardcoding values (V1, V2)
3. Mixing concerns (V4)
4. Non-parametrized methods (V2)
5. Leaving input logic outside class (V4)

✓ ALWAYS do what V5 does:

1. Proper encapsulation
2. Parametrized methods
3. Clear separation of concerns
4. Input handling in class
5. Clean main() function

FUTURE ENHANCEMENTS (for learning):
────────────────────────────────────────────────────────────────────────────────

To make V5 even better, you could add:

1. CONSTRUCTOR (instead of setter):
   Student(string name, int age) {
       this->name = name;
       this->age = age;
   }
   
2. GETTER METHODS (to read data):
   string getName() { return name; }
   int getAge() { return age; }
   
3. VALIDATION:
   void nameAgeSetter(string name, int age) {
       if (age >= 0) {  // Only allow positive age
           this->age = age;
       }
   }
   
4. DEFAULT CONSTRUCTOR:
   Student() {
       name = "";
       age = 0;
   }
   
5. FILE I/O:
   void saveToFile(string filename) { ... }
   void loadFromFile(string filename) { ... }

CLASS DESIGN CHECKLIST:
────────────────────────────────────────────────────────────────────────────────

V5 achieves:
✓ Encapsulation of data
✓ Encapsulation of operations
✓ Encapsulation of input/output logic
✓ Clear public interface
✓ Hidden implementation details
✓ High reusability
✓ High maintainability
✓ Professional quality
✓ Follows SOLID principles
✓ Easy to understand and use

COMPARISON: How to use each version
────────────────────────────────────────────────────────────────────────────────

CREATE 3 STUDENTS:

V1: Impossible - all students have same data

V2: Impossible - all students have same data

V3: Requires 3 setter calls with hardcoded data
    obj1.nameAgeSetter("Azhar", 19);
    obj2.nameAgeSetter("Fatima", 20);
    obj3.nameAgeSetter("Hassan", 18);

V4: Very cluttered:
    // For each student: declare vars, get input, call setter
    string name1; int age1;
    cin >> name1 >> age1;
    obj1.nameAgeSetter(name1, age1);
    // Repeat 2 more times... very repetitive!

V5: CLEAN AND SIMPLE:
    for (int i = 0; i < 3; i++) {
        Student obj;
        obj.inputHandler();
        obj.display();
    }
    
    OR just:
    Student obj1, obj2, obj3;
    obj1.inputHandler();
    obj2.inputHandler();
    obj3.inputHandler();

V5 IS CLEARLY THE BEST!

================================================================================
*/
