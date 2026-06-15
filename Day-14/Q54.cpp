#include<iostream>
using namespace std;

int main(){
    int n,key,count=0,arr[n];

    cout<<"enter size of array ";
    cin>>n;

    cout<<"enter elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"enter element to be searched ";
    cin>>key;

    for(int i=0;i<n;i++){
        if(arr[i]==key)
            count++;
    }

    cout<<"frequency is "<<count;

    return 0;
}