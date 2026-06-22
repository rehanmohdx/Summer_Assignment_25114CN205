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

    cout<<"Column wise sum:"<<endl;
    for(int j=0; j<col; j++){
        int sum = 0;  
        for(int i=0; i<row; i++){
            sum = sum + a[i][j];
        }
        cout<<"Column "<<j+1<<" sum = "<<sum<<endl;
    }

    return 0;
}