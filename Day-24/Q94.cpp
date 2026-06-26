#include <iostream>
using namespace std;

int main()
{
    string s;
    cout<<"enter string ";
    cin>>s;
    string ans = "";

    for(int i=0;i<s.length();i++)
    {
        char ch = s[i];
        int count = 0;
        while(i<s.length() && s[i]==ch)
        {
            count++;
            i++;
        }
        ans = ans + ch;
        ans = ans + to_string(count);
        i--;
    }
    cout<<"compressed string is "<<ans;

    return 0;
}