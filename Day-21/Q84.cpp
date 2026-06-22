#include<iostream>
using namespace std;

int main(){
    char str[100];
    cout<<"Enter string: ";
    cin.getline(str,100);

    for(int i=0; str[i]!='\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 'a' + 'A';
        }
    }
    cout<<"Uppercase string = "<<str;

    return 0;
}