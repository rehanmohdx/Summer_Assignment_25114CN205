#include <iostream>
using namespace std;

int main(){
    int n,i;
    
    cout << "enter number" << endl;
    cin >> n;
    
    for(i=1;i<=n;i++){
        if(n%i==0){
    cout << "factors of number are " << i << endl;
        }
    }
    return 0;
}