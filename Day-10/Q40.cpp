#include <iostream>
using namespace std;

int main() {

    int n=5,i,j,k,l;

    for(i=1;i<=n;i++){

        char ch1 = 'A';
        char ch2;  

        for(j=1;j<=n-i;j++){
            cout << " ";
        }

        for(k=1;k<=i;k++) {
            cout << ch1;
            ch1++;
        }
        
        ch2 = ch1 - 2;

        for(l=1;l<i;l++) {
            cout << ch2;
            ch2--;
        }

        cout << endl;
    }

    return 0;
}