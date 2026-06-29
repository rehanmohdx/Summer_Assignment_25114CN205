#include<iostream>
using namespace std;

int main(){
    string name;
    int choice;
    int tickets = 0;
    int price = 100;

    while(true){
        cout<<"\n1. Book Ticket";
        cout<<"\n2. Show Booking";
        cout<<"\n3. Cancel Ticket";
        cout<<"\n4. Exit";
        cout<<"\nEnter choice: ";
        cin>>choice;

        if(choice==1){
            cout<<"Enter name: ";
            cin>>name;
            int n;
            cout<<"Enter number of tickets: ";
            cin>>n;
            tickets += n;
            cout<<"Ticket booked\n";
            cout<<"Total cost: "<<n*price<<endl;
        }

        else if(choice==2){
            cout<<"\nName: "<<name;
            cout<<"\nTickets booked: "<<tickets<<endl;
        }

        else if(choice==3){
            tickets = 0;
            cout<<"Booking cancelled\n";
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