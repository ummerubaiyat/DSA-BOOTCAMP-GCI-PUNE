// 1. You are required to display the prime factorization of a number.
//     2. Take as input a number n.
//     3. Print all its prime factors from smallest to largest.
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    //write your code here
    for(int div=2; div* div <=n; div++)
    {
        while (n % div == 0)
        {
            n /= div;
            cout<<div<<" ";
        }

    }
           if(n!=1)
        {
            cout<<n<<endl;

        }
        
 

}
