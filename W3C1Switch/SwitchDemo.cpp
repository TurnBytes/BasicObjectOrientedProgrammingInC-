#include<iostream>
using namespace std;

void displayProduct(int i){
    if(i==1){

        cout<<"Thermal Jacket"<<endl;
        cout<<"Wool Sweater"<<endl;
        cout<<"Insulated Boots"<<endl;
        cout<<"Cashmere Scarf"<<endl;
    }else if(i==2){

        cout<<"UV Protection Sunglasses"<<endl;
        cout<<"Breathable Linen Shirt"<<endl;
        cout<<"Beach Sandals"<<endl;
        cout<<"Rehydration Drink"<<endl;
    }else{
        cout<<"Invalid selection."<<endl;
    }
}
 

int main(){

    int months;
    int condition = 1;
    while(condition<5){
        
        cout<<"Please select a season (1 for Winter, 2 for Summer): "<<endl;
        cin>>months;
        //months = "Jan";
        //cout<<months<<endl;
        
        switch(months){
            case 1:
                cout<<"Winter products: "<<endl;
                displayProduct(1);
                break;
            case 2:
                cout<<"Summer products: "<<endl;
                displayProduct(2);
                break;
            case 3:
                cout<<"Spring products: "<<endl;
                break;
            default:
                cout<<"Invalid selection."<<endl;
        }
        condition++;

    }
    return 0;
}