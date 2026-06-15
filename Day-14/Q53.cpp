#include<iostream>
using namespace std;

int main(){
    int n,key,arr[n];

    cout<<"enter size of array ";
    cin>>n;

    cout<<"enter elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"enter element to search ";
    cin>>key;

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"element found at index "<<i;
            return 0;
        }
    }
    cout<<"element not found";

    return 0;
}