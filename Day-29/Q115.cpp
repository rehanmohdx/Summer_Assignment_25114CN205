#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    int choice;

    while(true){
        cout<<"\n1. Enter String";
        cout<<"\n2. Display String";
        cout<<"\n3. Find Length";
        cout<<"\n4. Reverse String";
        cout<<"\n5. Exit";
        cout<<"\nEnter choice: ";
        cin>>choice;

        if(choice==1){
            cout<<"Enter string: ";
            cin>>str;
            cout<<"String saved\n";
        }

        else if(choice==2){
            cout<<"String: "<<str;
        }

        else if(choice==3){
            cout<<"Length: "<<str.length();
        }

        else if(choice==4){
            string rev="";
            for(int i=str.length()-1;i>=0;i--){
                rev += str[i];
            }
            cout<<"Reverse: "<<rev;
        }

        else if(choice==5){
            break;
        }

        else{
            cout<<"Invalid choice";
        }
    }

    return 0;
}