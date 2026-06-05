#include <iostream>
using namespace std;

int main() {
    int n,count=0,num,i,a,b,sum=0,original;
    
    cout << "enter number " << endl;
    cin >> n;
    original = n;
    num = n;
    while ( n!=0){
       n=n/10;
        count = count + 1;
        
    }

     for(i=1;i<=count;i++){
         a = num%10;
         b = a*a*a;
         sum = sum + b;
                  num = num/10;
     }
    
    if (original == sum){
        cout << "number is armstrong number";
    }else{
        cout << "number is not armstrong number";
    }
    
return 0;
}