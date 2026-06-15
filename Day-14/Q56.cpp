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
        int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                ans = arr[i];
                break;
            }
        }
    }
 cout<<"duplicate elements are " << ans << endl;

    return 0;
}