#include <iostream>
using namespace std;

int sum(int x, int y) {
    int ans = 0;
    ans = x + y;
    return ans;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Sum = " << sum(x, y);

    return 0;
}