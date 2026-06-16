#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cin>>n;
    int actualSum = 0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        actualSum = actualSum + arr[i];
    }

    int totalSum = 0;
    for(int i=1;i<=n;i++){
        totalSum = totalSum + i;
    }

    cout<<"missing number is: "<<totalSum - actualSum << endl;

    return 0;
}