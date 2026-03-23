#include "data.h"

int numEmployees = 5;
int seWidth = 14;
vector<string> employees;
vector<int> salary;
vector<char> performance;

void dataHandler(){
    employees = {"Azhar","Asif", "Ayeza", "Kamal", "Jamal"};
    salary = {20000, 30000, 40000, 50000, 60000};
    performance = {'A', 'B', 'C', 'D', 'E'};

    cout<<"SNo.";
    cout<<setw(seWidth)<<"Name. ";
    cout<<setw(seWidth)<<"Salary. ";
    cout<<setw(seWidth)<<"Performance. ";
    cout<<setw(seWidth)<<"New Salary. ";
    
    cout<<endl;
}