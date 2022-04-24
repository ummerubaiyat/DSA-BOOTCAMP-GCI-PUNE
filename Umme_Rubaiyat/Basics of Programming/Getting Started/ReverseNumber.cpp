// 1. You've to display the digits of a number in reverse.
// 2. Take as input "n", the number for which digits have to be display in reverse.
// 3. Print the digits of the number line-wise, but in reverse order.
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    //write your code here
    int count=0;
    while(n!=0)
    {   int r = n%10;
        n=n/10;
        cout<<r<<endl;
    }
    
    
}