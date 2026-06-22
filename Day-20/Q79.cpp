#include<iostream>
using namespace std;

int main(){
    int a[10][10];
    int row, col;

    cout<<"Enter rows and columns: ";
    cin>>row>>col;

    cout<<"Enter matrix:"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>a[i][j];
        }
    }

    cout<<"Row wise sum:"<<endl;
    for(int i=0; i<row; i++){
        int sum = 0;   
        for(int j=0; j<col; j++){
            sum = sum + a[i][j];
        }
        cout<<"Row "<<i+1<<" sum = "<<sum<<endl;
    }

    return 0;
}