#include <iostream>
using namespace std;

int main(){
    
    int i, a=0,b=1,n,num;
    
    cout << "print number for which we had to find fibonacci" << endl;
    cin >> n;
    
    
    for(i=1;i<=n-2;i++){
        num = a + b ;
    a = b ;
    b = num ;
    
    
    }
    cout << num;
    
    return 0;
}
    
   
    

