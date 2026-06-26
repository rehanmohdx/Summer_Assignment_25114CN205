#include <iostream>
using namespace std;

int main()
{
    char ans;
    int score = 0;
    cout << "Quiz Application << endl << endl";

    cout << "Q1: If your code runs on first try, what does it mean? << endl";
    cout << "A. You are lucky << endlB. You are lying << endlC. Universe is broken << endlD. You forgot to compile << endl";
    cout << "Enter answer: ";
    cin >> ans;

    if(ans == 'C')
        score++;

    cout << " << endlQ2: What is the official religion of programmers? << endl";
    cout << "A. Pythonism << endlB. C++ism << endlC. Stack Overflow worship << endlD. It worked on my machine << endl";
    cout << "Enter answer: ";
    cin >> ans;

    if(ans == 'C')
        score++;

    cout << " << endlQ3: Why do programmers prefer dark mode? << endl";
    cout << "A. Less eye strain << endlB. Looks cool << endlC. Hides their mistakes << endlD. So bugs don’t see them << endl";
    cout << "Enter answer: ";
    cin >> ans;

    if(ans == 'D')
        score++;


    cout << " << endlYour Score: " << score << "/3";

    return 0;
}