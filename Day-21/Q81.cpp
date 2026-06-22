#include<iostream>
using namespace std;

int main(){
    char str[100];
    cout<<"Enter string: ";
    cin>>str;
    int count = 0;

    while(str[count] != '\0'){
        count++;
    }
    cout<<"Length = "<<count;

    return 0;
}