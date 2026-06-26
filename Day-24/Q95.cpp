#include <iostream>
using namespace std;

int main()
{
    string s;
    cout<<"enter sentence ";
    getline(cin,s);
    int count = 0;
    int max = 0;
    string ans = "";
    string word = "";

    for(int i=0;i<=s.length();i++)
    {
        if(s[i]!=' ' && s[i]!='\0')
        {
            count++;
            word = word + s[i];
        }
        else
        {
            if(count>max)
            {
                max = count;
                ans = word;
            }
            count = 0;
            word = "";
        }
    }
    cout<<"longest word is "<<ans;

    return 0;
}