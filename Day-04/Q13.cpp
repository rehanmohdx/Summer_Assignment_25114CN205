#include <iostream>
using namespace std;

int main(){
    
    int i, a=0,b=1,n,num;
    
    cout << "print number for which we had to find fibonacci" << endl;
    cin >> n;
    
    cout << "0 1 " ;
    
    
    
    for(i=1;i<=n-2;i++){
        num = a + b ;
    cout << num ;
    a = b ;
    b = num ;
    }
    
    
    return 0;
}
    
   
    