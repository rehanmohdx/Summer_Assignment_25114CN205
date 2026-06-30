#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name[50];
    string post[50];
    int id[50];
    int salary[50];
    int n;
    cout<<"enter number of employees ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"enter employee name ";
        cin>>name[i];
        cout<<"enter employee post ";
        cin>>post[i];
        cout<<"enter employee id ";
        cin>>id[i];
        cout<<"enter salary ";
        cin>>salary[i];
    }

    cout<<"\nemployee record\n";
    for(int i=0;i<n;i++)
    {
        cout<<"\nname "<<name[i];
        cout<<"\npost "<<post[i];
        cout<<"\nid "<<id[i];
        cout<<"\nsalary "<<salary[i];
    }

    return 0;
}