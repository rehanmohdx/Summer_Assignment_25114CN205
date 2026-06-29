#include<iostream>
using namespace std;

int main(){
    int choice;
    float a,b;

    while(true){
        cout<<"\n1. Addition";
        cout<<"\n2. Subtraction";
        cout<<"\n3. Multiplication";
        cout<<"\n4. Division";
        cout<<"\n5. Exit";
        cout<<"\nEnter choice: ";
        cin>>choice;
        if(choice==5)
            break;
        cout<<"Enter two numbers: ";
        cin>>a>>b;

        switch(choice){
            case 1:
                cout<<"Answer = "<<a+b;
                break;

            case 2:
                cout<<"Answer = "<<a-b;
                break;

            case 3:
                cout<<"Answer = "<<a*b;
                break;

            case 4:
                if(b!=0)
                    cout<<"Answer = "<<a/b;
                else
                    cout<<"Cannot divide by zero";
                break;

            default:
                cout<<"Invalid choice";
        }
    }

    return 0;
}