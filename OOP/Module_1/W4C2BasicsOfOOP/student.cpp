#include <iostream>
using namespace std;

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

int main(){

    string name ="azhar";
    string address =" Kumber";
    int age = 20;
    int marks = 12;
    char grade;
    grade = agradCalculation(marks);

    cout<<"Name: "<<name<<" Address: "<<address<< "Age : "<<age<<" Marks: "<<marks<<" Grade: "<<grade<<endl;

}