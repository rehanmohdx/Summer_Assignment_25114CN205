#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cout<<"enter size of array ";
    cin>>n;
    cout<<"enter array elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0;
    int e=n-1;

    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }

    cout<<"reverse array is ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}