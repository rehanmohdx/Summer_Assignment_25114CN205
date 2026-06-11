#include <iostream>
using namespace std;

int main() {

    int n = 5,i,j,k,l;

    for(i=1;i<=n;i++){

        for(j=1;j<=n-i;j++){
            cout << " ";
        }

        for(k=1;k<=i;k++){
            cout << k;
        }

        for(l=i-1;l>=1;l--){
            cout << l;
        }
        cout << endl;
    }

    return 0;
}