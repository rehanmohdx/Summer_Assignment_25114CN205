#include<iostream>
using namespace std;

int main(){
    int n,even=0,odd=0,arr[n];

    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];

        if(arr[i]%2==0){
            even++;
       }
       else{
            odd++;
        }
        }

    cout<<"even elements "<<even << endl;
    cout<<"odd elements "<<odd << endl;

    return 0;
}