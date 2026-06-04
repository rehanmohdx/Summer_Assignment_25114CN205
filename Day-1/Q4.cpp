#include <iostream>
using namespace std;

int main() {
    int n,count=0;
    
    cout << "enter number for which we have to count  digit" << endl;
    cin >> n;
    
    while ( n!=0){
       n=n/10;
        count = count + 1;
        
    }
    cout << count;
}