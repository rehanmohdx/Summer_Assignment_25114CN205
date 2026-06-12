#include <iostream>
using namespace std;

int findMax(int x, int y) {
    int ans;

    if (x > y) {
        ans = x;
    }
    else {
        ans = y;
    }

    return ans;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Maximum = " << findMax(x, y);

    return 0;
}