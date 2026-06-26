#include <iostream>
using namespace std;

int main()
{
    string s;
    cout<<"enter string ";
    cin>>s;
    int freq[26]={0};
    
    for(int i=0;i<s.length();i++)
    {
        freq[s[i]-'a']++;

        if(freq[s[i]-'a']>1)
        {
            cout<<"first repeating character is "<<s[i];
            return 0;
        }
    }

    cout<<"no repeating character found";

    return 0;
}