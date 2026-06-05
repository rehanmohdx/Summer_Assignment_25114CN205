#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int range;

    cout << "Enter max range: ";
    cin >> range;

    for (int n = 1; n <= range; n++) {

        int original = n;
        int num = n;
        int count = 0;
        int sum = 0;

        while (num != 0) {
            count++;
            num = num / 10;
        }

        num = n;

        while (num != 0) {
            int digit = num % 10;
            sum = sum + pow(digit, count);
            num = num / 10;
        }

        if (sum == original) {
            cout << original << " ";
        }
    }

    return 0;
}