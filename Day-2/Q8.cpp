#include <iostream>
using namespace std;

int main(){
    int n,digit;
    
    cout << "enter number whose pallindrome properties to be checked" << endl;
    cin >>n;
    
    while (n!=0){
        digit = n%10;
        n = n/100;
        
        if (digit==n)
        {cout <<"n is pallindrome";
    }
}
}  
    
    
    

