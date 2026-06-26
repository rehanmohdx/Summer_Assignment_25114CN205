#include <iostream>
using namespace std;

int main()
{
    string s;
    cout<<"enter string ";
    cin>>s;
    string ans="";

    for(int i=0;i<s.length();i++)
    {
        ans = ans + s[i];
        for(int j=0;j<ans.length()-1;j++)
        {
            if(ans[j]==s[i])
            {
                ans.pop_back();
                break;
            }
        }
    }
    cout<<"after removing duplicate "<<ans;

    return 0;
}