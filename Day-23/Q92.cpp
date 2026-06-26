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
    }

    int max = 0;
    char ans;
    for(int i=0;i<26;i++)
    {
        if(freq[i]>max)
        {
            max = freq[i];
            ans = i+'a';
        }
    }
    cout<<"maximum occurring character is "<<ans;

    return 0;
}