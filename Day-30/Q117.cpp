#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name[50];
    int roll[50];
    int marks[50];
    int n;
    cout<<"enter number of students ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"enter student name ";
        cin>>name[i];
        cout<<"enter roll number ";
        cin>>roll[i];
        cout<<"enter marks ";
        cin>>marks[i];
    }

    cout<<"\nstudent record\n";
    for(int i=0;i<n;i++)
    {
        cout<<"\nname "<<name[i];
        cout<<"\nroll "<<roll[i];
        cout<<"\nmarks "<<marks[i];
    }

    return 0;
}