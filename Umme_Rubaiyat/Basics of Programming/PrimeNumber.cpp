// 1. You've to check whether a given number is prime or not.
// 2. Take a number "t" as input representing count of input numbers to be tested.
// 3. Take a number "n" as input "t" number of times.
// 4. For each input value of n, print "prime" if the number is prime and "not prime" otherwise.
#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t,n,i;
    cin >> t;
   

    //write your code here
    
    for(i=1;i<=t;i++)
    {
        cin>>n;
        int factor =0;
        for(int div=2;div*div<=n;div++)
        {
            if(n%div==0)
            {
                factor= factor+1;
                break;
            }
            
        }
         if(factor==0){
            cout<<"Prime\n";
        }
        else{
            cout<<"Not Prime\n";
        }
       
    }
    
}