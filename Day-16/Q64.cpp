#include<iostream>
using namespace std;

int main(){
    int arr[100], n;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n-1;i++){
        if(arr[i] == arr[i+1]){
            for(int j=i;j<n-1;j++){
                arr[j] = arr[j+1];
            }
            n--;
            i--;
        }
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}