#include <iostream>
using namespace std;

// Remember, we will refine this program step by step, this is just for your understaning
//on how we can approach a problem with different strategy--some might be good and some might not..
class Student{
    
    private://access modifier/specifier
        string name;
        int age;
    public://access modifier/specifier
        void nameAgeSetter(string student_name, int  student_age){ //parametraized setter method
            this->name = student_name;
            this->age = student_age;
        }

        void display(){ //getter method, you can name it whatever you want
            cout<<"Name: "<<this->name<<endl;
            cout<<"Age: "<<this->age<<endl;
        }
        
        void inputHandler(Student obj){
            
            //string student_name;
            //int student_age;

            cout<<"Enter Student Name: ";
            cin>>obj.name;

            cout<<"Enter Student Age: ";
            cin>>obj.age;

            this->nameAgeSetter(obj.name, obj.age);
        }
};

int main(){

    Student obj;//instantiation or object creation
    //obj.name; this is private and can't be accessed out of the class

    obj.inputHandler(obj);
    //obj.nameAgeSetter(student_name, student_age);
    obj.display();//calling getter method (display) with (.) dot operator OR Class Member Operator
    return 0;
}