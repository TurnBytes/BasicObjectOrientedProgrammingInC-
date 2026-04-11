#include <iostream>
using namespace std;

class Student{

    string name ="azhar";
    string address =" Kumber";
    int age = 20;
    int marks = 12;
    char grade;

    char agradCalculation(int marks){
    ///char grade;
    if(marks > 85)
    {
        //grade = 'A';
        return 'A';
    }else if(marks > 70){
        return 'B';
    }else{
        return 'C';
    }
    }
    public:
        void display(){
            grade = agradCalculation(marks);
            cout<<"Name: "<<this->name<<" Address: "<<this->address<< " Age : "<<this->age<<" Marks: "<<this->marks<<" Grade: "<<grade<<endl;
        }

        void inputHandler(){
            cout<<"Enter Name: \n";
            cout<<"Enter Address: \n";
            cout<<"Enter age: \n";
            cout<<"Enter marks: \n";
            cin>>this->name>>this->address>>this->age>>this->marks;

            this->display();
            


        }
};


int main(){


   Student Sehrish;
   Sehrish.inputHandler();

    return 0;

}