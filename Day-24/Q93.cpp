#include <iostream>
using namespace std;

int main()
{
    string s1,s2;
    cout<<"enter first string ";
    cin>>s1;
    cout<<"enter second string ";
    cin>>s2;

    string temp = s1+s1;
    bool check = false;
    for(int i=0;i<temp.length();i++)
    {
        int k=i;
        for(int j=0;j<s2.length();j++)
        {
            if(temp[k]==s2[j])
            {
                k++;
            }
            else
            {
                break;
            }
            if(j==s2.length()-1)
            {
                check=true;
            }
        }
    }

    if(check)
    {
        cout<<"string is rotation";
    }
    else
    {
        cout<<"not rotation";
    }

    return 0;
}