//1. You've to display the digits of a number.
// 2. Take as input "n", the number for which digits have to be displayed.
// 3. Print the digits of the number line-wise.
#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    //write your code here
    int count=0;
    int num = n;
    while(num!=0)
    {   
        num=num/10;
        count= count+1;
    }
    int div= pow(10,count-1);
    while(div!=0)
    {
        int q= n / div;
        int r= n % div;
        cout<<q<<endl;
        n = r;
        div = div/10;
    }
    

    
}