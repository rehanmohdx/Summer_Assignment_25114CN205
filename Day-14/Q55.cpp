#include<iostream>
using namespace std;

int main(){
    int n,arr[n];

    cout<<"enter size of array ";
    cin>>n;

    cout<<"enter elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest)
            largest=arr[i];
    }

    int second=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>second && arr[i]<largest)
            second=arr[i];
    }
    cout<<"second largest element is "<<second;

    return 0;
}