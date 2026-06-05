#include <iostream>
using namespace std;

int main() {
int num1,num2,lcm,n,i;   

cout << " enter number" << endl;
cin >> n;


  cout << "enter number 1 " << endl;
  cin >> num1;
  
  cout << "enter number 2" << endl;
  cin >> num2;
  
  for(i=1;i<=n;i++){
      if(i%num1 == 0 && i%num2 == 0){
        lcm = i;
        break;
      }
  }
cout << "LCM of given numbers are " << lcm << endl;  
    return 0;
}