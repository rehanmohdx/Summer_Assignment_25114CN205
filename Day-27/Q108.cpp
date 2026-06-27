#include <iostream>
using namespace std;

struct Student
{
    string name;
    int roll;
    int m1, m2, m3;
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
        cout << "Roll no: ";
        cin >> s[i].roll;
        cout << "Subject 1 marks: ";
        cin >> s[i].m1;
        cout << "Subject 2 marks: ";
        cin >> s[i].m2;
        cout << "Subject 3 marks: ";
        cin >> s[i].m3;
    }

    cout << "\nMarksheet:\n";
    for(int i = 0; i < n; i++)
    {
        int total = s[i].m1 + s[i].m2 + s[i].m3;
        float per = total / 3.0;

        cout << "\nName: " << s[i].name;
        cout << "\nRoll: " << s[i].roll;
        cout << "\nTotal: " << total;
        cout << "\nPercentage: " << per;

        if(per >= 90)
            cout << "\nGrade: A";
        else if(per >= 75)
            cout << "\nGrade: B";
        else if(per >= 50)
            cout << "\nGrade: C";
        else
            cout << "\nGrade: Fail";
        cout << endl;
    }

    return 0;
}