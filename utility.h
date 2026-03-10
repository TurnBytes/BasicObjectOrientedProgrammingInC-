#include<iostream>
using namespace std;

int bankBlance[5];
int limit;
float deductoinRate;

void inputProcessingModule(){   
    //int bankBlance[5];   
    for(int J=0; J<sizeof(bankBlance)/sizeof(bankBlance[0]); J++){
        cout<<"Please Enter Account Number "<<J+1<<" Balance:"<<endl;
        cin>>bankBlance[J];
    }  
    //int limit;
    cout<<"Please Enter Limit:"<<endl;
    cin>>limit;
    
    //float deductoinRate;
    cout<<"Please Enter Deduction Rate in percentage:"<<endl;
    cin>>deductoinRate;
}

void ZakatProcessingModule(){

    //int bankBlance[5] ={44,45,46,47,48};
    for(int i=0; i<5; i++){
        if(bankBlance[i] > limit){
            
            float zakat = (deductoinRate/100)*bankBlance[i];
            bankBlance[i] = bankBlance[i] - zakat;
            cout<<"Your new balance is "<<bankBlance[i]<<endl<<endl; 
            
        } else {
            cout<<" Da kas loser di";
        }
    }
}