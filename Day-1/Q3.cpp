#include <iostream>
using namespace std;

int main() {
    int n,i,fact;
    cout << "enter number for which we had to calculate factorial" << endl;
    cin >> n;
    for ( i=1;i<=n;i++){
    fact = fact * i; 
    
    }
    cout << fact << endl;
return 0;
}