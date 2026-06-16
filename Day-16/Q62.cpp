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

    int maxCount = 0;
    int ans = arr[0];
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count > maxCount){
            maxCount = count;
            ans = arr[i];
        }
    }
    cout<<"maximum frequency element is "<<ans << endl;

    return 0;
}