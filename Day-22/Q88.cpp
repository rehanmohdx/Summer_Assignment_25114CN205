#include<iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    string ans = "";

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != ' ')
        {
            ans = ans + str[i];
        }
    }
    cout << "After removing spaces: " << ans;

    return 0;
}