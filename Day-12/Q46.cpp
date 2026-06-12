#include <iostream>
using namespace std;

bool isArmstrong(int n) {
    int original = n;
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }
    if (original == sum) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int n;

    cout << "enter number: ";
    cin >> n;

    if (isArmstrong(n)) {
        cout << "armstrong number";
    }
    else {
        cout << "not a armstrong number";
    }

    return 0;
}