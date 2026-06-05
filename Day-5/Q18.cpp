#include <iostream>
using namespace std;

int main(){
    int n,i,digit,original,fact,sum=0;
    
    cout << "enter number" << endl;
    cin >> n;
    original =n;
    while(n!=0){
        digit = n%10;
        n = n/10; 
        fact=1;
        for(i=1;i<=digit;i++){
            fact=fact*i;
        }
        sum = sum + fact;
        
    }
        if (sum == original){
            cout << "it is strong number";
        }
        else{cout << "it is not strong number";
    }
    return 0;
}