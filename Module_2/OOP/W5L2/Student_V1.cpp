#include <iostream>
using namespace std;
// Remember, we will refine this program step by step, this is just for your understaning
//on how we can approach a problem with different strategy--some might be good and some might not..
class Student{
    
    private://access modifier/specifier
        string name = "Azhar";
        int age = 19;

    public://access modifier/specifier
        void display(){ //non-prametarized getter method, you can name it whatever you want
            cout<<"Name: "<<this->name<<endl;
            cout<<"Age: "<<this->age<<endl;
        }
};

int main(){
    Student obj;//instantiation or object creation
    //obj.name; this is private and can't be accessed out of the class
    obj.display();//calling getter method (display) with (.) dot operator OR Class Member Operator
    return 0;
}