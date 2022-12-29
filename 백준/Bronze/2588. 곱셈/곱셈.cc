#include <iostream>

using namespace std;

int main(){
    int a,b,num1,num2,num3;
    cin >> a >> b;
    
    num1 = a*(b%10);
    num2 = a*(b/10%10);
    num3 = a*(b/100);
    
    cout << num1 << "\n";
    cout << num2 << "\n";
    cout << num3 << "\n";
    
    cout << num3*100 + num2*10 + num1 <<"\n";
    
    return 0;
}