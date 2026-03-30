#include <iostream>
using namespace std;

class StudentClass{
    
    public:
        string name;
        int marks;
        char grade;

    StudentClass(){
        //initialize default
    }
    StudentClass(string name, int marks, char grad){
        this->name = name;
        this->marks = marks;
        this->grade = grade;
    }
    void displayStudentInfor(){
        cout<<name<<" got "<<marks<<" marks with grade "<<grade;
    }
};

int main(){
    StudentClass azhar;
    StudentClass asif("Khan",44,'C');
    //cout<<"Student Grad "<<asif.grade;
    asif.displayStudentInfor();
    //cout<<"hello world";
    return 0;
};