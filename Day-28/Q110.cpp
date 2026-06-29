#include<iostream>
using namespace std;

int main(){
    string name;
    int choice;
    int balance = 0;

    cout<<"Enter account holder name: ";
    cin>>name;

    while(true){
        cout<<"\n1. Deposit";
        cout<<"\n2. Withdraw";
        cout<<"\n3. Check Balance";
        cout<<"\n4. Exit";
        cout<<"\nEnter choice: ";
        cin>>choice;

        if(choice==1){
            int amount;
            cout<<"Enter deposit amount: ";
            cin>>amount;
            balance += amount;
            cout<<"Money deposited\n";
        }

        else if(choice==2){
            int amount;
            cout<<"Enter withdraw amount: ";
            cin>>amount;
            if(amount <= balance){
                balance -= amount;
                cout<<"Money withdrawn\n";

            }
            else{
                cout<<"Insufficient balance\n";
            }
        }

        else if(choice==3){
            cout<<"Account Holder: "<<name<<endl;
            cout<<"Balance: "<<balance<<endl;
        }

        else if(choice==4){
            break;
        }
        else{
            cout<<"Invalid choice";
        }

    }

    return 0;
}