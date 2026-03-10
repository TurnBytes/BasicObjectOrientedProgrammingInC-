#include<iostream>

using namespace std;

int main()
{

    int bankBlance;
    cout<<"Please Enter Account Balance:"<<endl;
    cin>>bankBlance;
    //cout<<bankBlance<<endl;

    int limit;
    cout<<"Please Enter Limit:"<<endl;
    cin>>limit;

    float deductoinRate;
    cout<<"Please Enter Deduction Rate in percentage:"<<endl;
    cin>>deductoinRate;
    
    float zakat = (deductoinRate/100)*bankBlance;

    if(bankBlance > limit){
        
        bankBlance = bankBlance - zakat;
        cout<<"Your new balance is "<<bankBlance; 
        
    } else {
        cout<<" Da kas loser di";
    }


    return 0;

};
