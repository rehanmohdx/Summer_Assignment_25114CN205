#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter sentence: ";
    getline(cin, str);
    int count = 0;
    int i = 0;

    while(i < str.length())
    {
        while(i < str.length() && str[i] == ' ')
        {
            i++;
        }

        if(i < str.length())
        {
            count++;
            while(i < str.length() && str[i] != ' ')
            {
                i++;
            }
        }
    }
    cout << "Total words: " << count;

    return 0;
}