#include <iostream>
using namespace std;

int main()
{
    string s1,s2;
    cout<<"enter first string ";
    cin>>s1;
    cout<<"enter second string ";
    cin>>s2;

    int freq1[26]={0};
    int freq2[26]={0};
    for(int i=0;i<s1.length();i++)
    {
        freq1[s1[i]-'a']++;
        freq2[s2[i]-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        if(freq1[i]!=freq2[i])
        {
            cout<<"not anagram";
            return 0;
        }
    }
    cout<<"anagram";

    return 0;
}