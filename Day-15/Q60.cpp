#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cout<<"enter size ";
    cin>>n;
    cout<<"enter elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int j = 0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }

    cout<<"array after moving zeroes ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}