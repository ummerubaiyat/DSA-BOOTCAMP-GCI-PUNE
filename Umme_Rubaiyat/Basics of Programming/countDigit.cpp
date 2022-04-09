// 1. You've to count the number of digits in a number.
// 2. Take as input "n", the number for which the digits has to be counted.
// 3. Print the digits in that number.
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    //write your code here
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    cout<<count;
    
}