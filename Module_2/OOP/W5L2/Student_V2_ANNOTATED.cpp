/*
================================================================================
              STUDENT CLASS - VERSION 2: NON-PARAMETRIZED SETTER
================================================================================

Learning Objective:
  → Understand SETTER METHODS - methods that set/assign values
  → Learn to separate data declaration from initialization
  → Practice calling methods in sequence

What's New in V2:
  → Removed default values from member declaration
  → Added nameAgeSetter() method to set values
  → Data is now empty until setter is called

Key Concepts:
  1. Setter Method: Method to assign/modify private data
  2. Method Calling Sequence: Call setter BEFORE using data
  3. Separation: Declaration ≠ Initialization
  4. Controlled Access: Only class methods can modify private data

Improvement from V1:
  → Can initialize data at different times
  → Data assignment is separate from class definition
  → More control over initialization process

================================================================================
*/

#include <iostream>
using namespace std;

class Student {
    
    // ============== PRIVATE SECTION ==============
    private:
        // NOTE: NO default values here anymore
        // Members are declared but NOT initialized
        // Values will be set later by setter method
        string name;
        int age;
    
    
    // ============== PUBLIC SECTION ==============
    public:
        /*
        SETTER METHOD: nameAgeSetter()
        
        Purpose: SET (assign) values to private members
        Parameters: NONE (non-parametrized) - hardcoded inside method
        Return Type: void
        
        Important Note:
          → This method's values are HARDCODED inside the method body
          → Same as V1, but now it's a SEPARATE METHOD
          → Still not flexible, but shows setter pattern
          
        Sequence of Operation:
          1. Create object: Student obj;
          2. Call setter: obj.nameAgeSetter();
          3. Data is now assigned
          4. Can call display()
        */
        void nameAgeSetter() {
            // Assignment using 'this->' pointer
            // Values are HARDCODED in this method
            this->name = "Azhar";
            this->age = 19;
        }

        /*
        GETTER METHOD: display()
        
        Purpose: Display (retrieve) the private data
        Parameters: None
        Return Type: void
        
        This is SAME as V1 - only for displaying data
        */
        void display() {
            // Now we know data is initialized (because setter was called)
            cout << "Name: " << this->name << endl;
            cout << "Age: " << this->age << endl;
        }
};

// ============== MAIN FUNCTION ==============
int main() {
    
    // Step 1: Create object
    // At this point, name and age are EMPTY (not initialized)
    Student obj;
    
    // Step 2: Call setter BEFORE using the object
    // IMPORTANT: Must call setter to initialize data
    // Otherwise data will be garbage/uninitialized
    obj.nameAgeSetter();
    
    // Step 3: Now we can safely call display()
    // Data has been initialized by setter
    obj.display();
    
    /*
    Expected Output:
    Name: Azhar
    Age: 19
    
    Call Sequence:
    main() 
      ↓ creates obj (empty)
      ↓ calls obj.nameAgeSetter() (initializes to Azhar, 19)
      ↓ calls obj.display() (prints the data)
      ↓ return
    */
    
    return 0;
}

/*
================================================================================
                              ANALYSIS
================================================================================

WHAT CHANGED FROM V1:
────────────────────────────────────────────────────────────────────────────────
| Aspect              | V1                    | V2                             |
|─────────────────────|─────────────────────|─────────────────────────────────|
| Member Init         | In declaration        | In setter method               |
| When data set       | At object creation    | When setter is called          |
| Flexibility         | None                  | Slightly better                |
| Code needed         | Less code             | More code                      |
────────────────────────────────────────────────────────────────────────────────

STRENGTHS:
✓ Shows SETTER METHOD concept
✓ Separates declaration from initialization
✓ More control over when data is set
✓ Shows method calling sequence

LIMITATIONS:
✗ Still HARDCODED - values inside method
✗ Cannot create different objects with different data
✗ Values are FIXED in the code
✗ Not flexible at all
✗ Why have non-parametrized setter? Not practical!

WHEN TO USE THIS APPROACH:
→ Teaching: Understanding setter pattern
→ NOT for real applications (hardcoded = not flexible)

WHY V2 EXISTS:
→ Shows the PATTERN - how to create setter methods
→ Next version (V3) will make it PARAMETRIZED (flexible)
→ Important step in learning progression

NEXT STEP (V3):
→ Make setter ACCEPT PARAMETERS
→ nameAgeSetter(string name, int age)
→ Now we can pass different values!
→ True flexibility achieved

================================================================================
*/
