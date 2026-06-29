#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n=0;
    int choice;

    while(true){
        cout<<"\n1. Insert Element";
        cout<<"\n2. Display Array";
        cout<<"\n3. Search Element";
        cout<<"\n4. Delete Element";
        cout<<"\n5. Exit";
        cout<<"\nEnter choice: ";
        cin>>choice;

        if(choice==1){
            int x;
            cout<<"Enter element: ";
            cin>>x;
            arr[n]=x;
            n++;
            cout<<"Inserted\n";
        }

        else if(choice==2){
            cout<<"Array: ";
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
        }

        else if(choice==3){
            int x;
            cout<<"Enter element to search: ";
            cin>>x;
            bool found=false;
            for(int i=0;i<n;i++){
                if(arr[i]==x){
                    cout<<"Element found at index "<<i<<endl;
                    found=true;
                }
            }
            if(!found)
                cout<<"Not found";
        }

        else if(choice==4){
            int pos;
            cout<<"Enter index to delete: ";
            cin>>pos;
            for(int i=pos;i<n-1;i++){
                arr[i]=arr[i+1];
            }
            n--;
            cout<<"Deleted\n";
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