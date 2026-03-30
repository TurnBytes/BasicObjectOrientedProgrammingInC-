#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Represents a student with name, marks, and grade.
 */
class Student {
private:
    string name;
    int marks;
    char grade;

public:
    /**
     * @brief Default constructor.
     */
    Student() : name(""), marks(0), grade(' ') {}

    /**
     * @brief Parameterized constructor.
     * @param name Student's name
     * @param marks Student's marks
     * @param grade Student's grade
     */
    Student(const string& name, int marks, char grade)
        : name(name), marks(marks), grade(grade) {}

    /**
     * @brief Displays student information.
     */
    void displayInfo() const {
        cout << name << " achieved " << marks << " marks with grade " << grade << "." << endl;
    }

    // Getters
    string getName() const { return name; }
    int getMarks() const { return marks; }
    char getGrade() const { return grade; }

    // Setters
    void setName(const string& name) { this->name = name; }
    void setMarks(int marks) { this->marks = marks; }
    void setGrade(char grade) { this->grade = grade; }
};

int main() {
    // Create student objects
    Student kamal;  // Default constructor
    Student asif("Khan", 44, 'C');  // Parameterized constructor

    // Display information
    asif.displayInfo();

    return 0;
}