#include<iostream>
using namespace std;

int main(){
    int n,sum=0,arr[n];
    
    cout<<"enter size of array: ";
    cin>>n;
    
    cout<<"enter elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }

    cout<<"sum is "<<sum << endl;
    cout<<"average is "<<sum/n << endl;

    return 0;
}