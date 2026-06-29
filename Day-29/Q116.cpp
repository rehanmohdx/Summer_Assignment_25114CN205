#include<iostream>
using namespace std;

int main(){
    string item[50];
    int quantity[50];
    int count=0;
    int choice;

    while(true){
        cout<<"\n1. Add Item";
        cout<<"\n2. Display Inventory";
        cout<<"\n3. Update Quantity";
        cout<<"\n4. Exit";
        cout<<"\nEnter choice: ";
        cin>>choice;

        if(choice==1){
            cout<<"Enter item name: ";
            cin>>item[count];
            cout<<"Enter quantity: ";
            cin>>quantity[count];
            count++;
            cout<<"Item added\n";
        }

        else if(choice==2){
            cout<<"\nInventory:\n";
            for(int i=0;i<count;i++){
                cout<<"Item: "<<item[i]
                    <<" Quantity: "<<quantity[i]<<endl;
            }
        }

        else if(choice==3){
            string search;
            int q;
            cout<<"Enter item name: ";
            cin>>search;
            for(int i=0;i<count;i++){
                if(item[i]==search){
                    cout<<"Enter new quantity: ";
                    cin>>q;
                    quantity[i]=q;
                    cout<<"Updated\n";
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