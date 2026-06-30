#include <iostream>
#include <string>
using namespace std;

int main()
{
    string book[50];
    string author[50];
    int id[50];
    int n;
    cout<<"enter number of books ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"enter book name ";
        cin>>book[i];
        cout<<"enter author name ";
        cin>>author[i];
        cout<<"enter book id ";
        cin>>id[i];
    }

    cout<<"\nlibrary record\n";
    for(int i=0;i<n;i++)
    {
        cout<<"\nbook "<<book[i];
        cout<<"\nauthor "<<author[i];
        cout<<"\nid "<<id[i];
    }

    return 0;
}