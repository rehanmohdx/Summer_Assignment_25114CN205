#include <iostream>
using namespace std;

int fact(int n){
    if (n==0){
        return 1;
    }
    
    return n * fact(n-1);
}
    int main(){
       int n;
       
        cout << "enter number" << endl;
        cin >> n;
        
        cout << "factorial = " << fact(n) << endl;

        
    
          return 0;   
    }
    