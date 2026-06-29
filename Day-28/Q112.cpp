#include<iostream>
using namespace std;

int main(){
    string name[50];
    string phone[50];
    int count=0;
    int choice;

    while(true){
        cout<<"\n1. Add Contact";
        cout<<"\n2. Display Contact";
        cout<<"\n3. Search Contact";
        cout<<"\n4. Exit";
        cout<<"\nEnter choice: ";
        cin>>choice;

        if(choice==1){
            cout<<"Enter name: ";
            cin>>name[count];
            cout<<"Enter phone number: ";
            cin>>phone[count];
            count++;
            cout<<"Contact saved\n";
        }

        else if(choice==2){
            cout<<"\nContacts:\n";
            for(int i=0;i<count;i++){
                cout<<"Name: "<<name[i]
                    <<"  Phone: "<<phone[i]<<endl;
            }
        }

        else if(choice==3){
            string search;
            cout<<"Enter name to search: ";
            cin>>search;
            for(int i=0;i<count;i++){
                if(name[i]==search){
                    cout<<"Found\n";
                    cout<<"Phone: "<<phone[i]<<endl;
                }
            }
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