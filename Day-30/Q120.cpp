#include <iostream>
#include <string>
using namespace std;

string movie[10];
string name[10];
int seat[10];
int n=0;

void book()
{
    cout<<"enter movie name ";
    cin>>movie[n];
    cout<<"enter your name ";
    cin>>name[n];
    cout<<"enter seat number ";
    cin>>seat[n];
    n++;
    cout<<"ticket booked\n";
}

void show()
{
    for(int i=0;i<n;i++)
    {
        cout<<"\nmovie "<<movie[i];
        cout<<"\nname "<<name[i];
        cout<<"\nseat "<<seat[i];
    }
}

int main()
{
    int ch;
    do
    {
        cout<<"\n1 book ticket";
        cout<<"\n2 show ticket";
        cout<<"\n3 exit";
        cout<<"\nenter choice ";
        cin>>ch;

        if(ch==1)
        {
            book();
        }
        else if(ch==2)
        {
            show();
        }
    }while(ch!=3);

    return 0;
}