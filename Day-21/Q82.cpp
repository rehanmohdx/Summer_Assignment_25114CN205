#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cout<<"Enter string: ";
    getline(cin, str);
    reverse(str.begin(), str.end());
    cout<<"Reverse string = "<<str;

    return 0;
}