// 1. You've to print all prime numbers between a range. 
// 2. Take as input "low", the lower limit of range.
// 3. Take as input "high", the higher limit of range.
// 4. For the range print all the primes numbers between low and high (both included).
#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int low,high,div,n,i;
    //cout<<"low:";
    cin >> low;
    //cout<<"high:";
    cin >> high;

    //write your code here
    
    for(i=low;i<=high;i++)
    {
        n=i;
        int factors =0;
        for(div=2;div*div<=n;div++)
        {
            if(n%div==0)
            {
                factors= factors+1;
                break;
            }
            
        }
         if(factors==0){
            cout<<n<<endl;
        }
       
       
    }
    
}