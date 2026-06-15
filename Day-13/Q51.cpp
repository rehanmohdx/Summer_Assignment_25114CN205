#include<iostream>
using namespace std;

int main(){
    int n,arr[n];

    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int largest=arr[0];
    int smallest=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }

    cout<<"largest is "<<largest << endl;
    cout<<"smallest is "<<smallest << endl;

    return 0;
}