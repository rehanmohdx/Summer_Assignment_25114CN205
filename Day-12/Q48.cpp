#include <iostream>
using namespace std;

bool isPerfect(int n) {
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }
    if (sum == n) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;

    if (isPerfect(n)) {
        cout << "perfect number";
    }
    else {
        cout << "not a perfect number";
    }

    return 0;
}