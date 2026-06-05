#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int pr = 1;

    for(int i = 2; i <= n; i++) {
        while(n % i == 0) {
            pr = i;
            n /= i;
        }
    }
    cout << "Largest prime factor = " << pr;
    return 0;
}