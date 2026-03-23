#include "logic.h"
#include <iostream>

void LogicHandler(){
    for(int i=0; i<numEmployees; i++){
        cout<<i+1<<"";
        cout<<setw(seWidth)<<employees[i]<<"";
        cout<<setw(seWidth)<<salary[i]<<"";
        
        cout<<setw(seWidth)<<performance[i]<<"";
        if(performance[i]=='A'){
            salary[i] +=500;
            cout<<setw(seWidth)<<salary[i];
        }
        else if(performance[i]=='B'){
            salary[i] +=400;
            cout<<setw(seWidth)<<salary[i];
        }
        else if(performance[i]=='C'){
            salary[i] +=300;
            cout<<setw(seWidth)<<salary[i];
        }
        else if(performance[i]=='D'){
            salary[i] -= 100;
            cout<<setw(seWidth)<<salary[i];
        }
        else{
            salary[i] -= 200;
            cout<<setw(seWidth)<<salary[i];
        }

        cout<<endl;
    }
    cout<<endl;

}