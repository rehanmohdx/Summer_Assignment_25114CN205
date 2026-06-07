#include <iostream>
using namespace std;

int main(){
    int x,ans=1,n;
    cout << "enter number" << endl;
    cin >> x;
    
    cout << "enter power req" << endl;
    cin >> n;
    
    
while(n!=0){
    if(n&1){
    ans = ans*x;
    }
    x = x*x;
    n = n>>1;
}
cout << "ans = " << ans;
 return 0;   
}