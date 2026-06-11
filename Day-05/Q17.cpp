 #include <iostream>
 using namespace std;
 
 int main(){
     int n,i,x=0;
     
     cout << "enter number" << endl;
     cin >> n;
     
     for(i=1;i<n;i++){
         if(n%i==0){
         x=x+i;
         }
     }
     if (x==n){
         cout << "it is a perfect number ";
     }
    
     else{
         cout << "it is not a perfect number" << endl;
     }
     return 0;
 }