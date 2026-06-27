#include <iostream>
using namespace std;

struct Student
{
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student s[n];
    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter student " << i+1 << " details:\n";
        cout << "Name: ";
        cin >> s[i].name;
        cout << "Roll number: ";
        cin >> s[i].roll;
        cout << "Marks: ";
        cin >> s[i].marks;
    }

    cout << "\nStudent Records:\n";
    for(int i = 0; i < n; i++)
    {
        cout << "\nName: " << s[i].name;
        cout << "\nRoll: " << s[i].roll;
        cout << "\nMarks: " << s[i].marks << endl;
    }

    return 0;
}