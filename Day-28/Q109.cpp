#include<iostream>
using namespace std;

int main(){
    string books[10];
    int choice;
    int count=0;

    while(true){
        cout<<"\n1. Add Book";
        cout<<"\n2. Display Books";
        cout<<"\n3. Exit";
        cout<<"\nEnter choice: ";
        cin>>choice;

        if(choice==1){
            cout<<"Enter book name: ";
            cin>>books[count];
            count++;
            cout<<"Book added\n";
        }

        else if(choice==2){
            cout<<"\nLibrary Books:\n";
            for(int i=0;i<count;i++){
                cout<<i+1<<" "<<books[i]<<endl;
            }
        }

        else if(choice==3){
            break;
        }

        else{
            cout<<"Invalid choice";
        }
    }

    return 0;
}