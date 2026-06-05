#include <iostream>
using namespace std;

int main() {
int num1,num2,gcd,i;    

  cout << "enter number 1 " << endl;
  cin >> num1;
  
  cout << "enter number 2" << endl;
  cin >> num2;
  
  for(i=1; i<=num1 && i<=num2; i++){
      if(num1%i == 0 && num2%i == 0){
        gcd = i;
      }
  }
cout << "GCD of given numbers are " << gcd << endl;  
    return 0;
}