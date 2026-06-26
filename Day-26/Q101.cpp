#include <iostream>
using namespace std;

int main() {
    int secret = 67; 
    int guess;
    int attempts = 0;
    cout << "Guess the number between 1 and 100\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        if (guess > secret) {
            cout << "Too high\n";
        }
        else if (guess < secret) {
            cout << "Too low\n";
        }
        else {
            cout << "Correct! Attempts: " << attempts;
        }

    } while (guess != secret);

    return 0;
}