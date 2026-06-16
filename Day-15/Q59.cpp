#include<iostream>
using namespace std;

void reverseArray(int arr[], int s, int e){
    while(s < e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main(){
    int arr[100];
    int n;
    int k;
    cout<<"enter size of array ";
    cin>>n;
    cout<<"enter array elements ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"enter rotation ";
    cin>>k;
    k = k % n;
    reverseArray(arr, 0, n-1);
    reverseArray(arr, 0, k-1);
    reverseArray(arr, k, n-1);

    cout<<"right rotated array is ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}