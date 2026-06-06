#include <iostream>
using namespace std;

int main() {
    int i,n,count = 0;

    cout << "Enter number: ";
    cin >> n;

    for (i = 0; i < 32; i++) {
        if ((n & 1) == 1) {
            count++;
        }
        n = n >> 1;
    }

    cout << "Count of set bits = " << count << endl;

    return 0;
}