#include<iostream>
using namespace std;

int main(){
    int size = 5;
    cout<<"Please Enter No. of Employees:   "<<endl;
    cin>>size;

    
    string employees[size] = {"Azhar","Asif", "Ayeza", "Kamal", "Jamal"};
    int salary[size] = {20000, 30000, 40000, 50000, 60000};
    char performance[size] = {'A', 'B', 'C', 'D', 'E'};

    cout<<"S No.    ";
    cout<<"Name.    ";
    cout<<"Salalry.    ";
    cout<<"Performance.    ";
    cout<<"New Salary.    ";
    
    cout<<endl;

    for(int i=0; i<size; i++){
        cout<<i+1<<"    ";
        cout<<employees[i]<<"    ";
        cout<<salary[i]<<"   ";
        
        cout<<performance[i]<<"    ";
        if(performance[i]=='A'){
            salary[i] +=500;
            cout<<salary[i];
        }
        else if(performance[i]=='B'){
            salary[i] +=400;
            cout<<salary[i];
        }
        else if(performance[i]=='C'){
            salary[i] +=300;
            cout<<salary[i];
        }
        else if(performance[i]=='D'){
            salary[i] -= 100;
            cout<<salary[i];
        }
        else{
            salary[i] -= 200;
            cout<<salary[i];
        }

        cout<<endl;
    }
    cout<<endl;

    return 0;
}