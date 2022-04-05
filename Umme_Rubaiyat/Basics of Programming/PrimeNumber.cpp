// 1. You've to check whether a given number is prime or not.
// 2. Take a number "t" as input representing count of input numbers to be tested.
// 3. Take a number "n" as input "t" number of times.
// 4. For each input value of n, print "prime" if the number is prime and "not prime" otherwise.
#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t,n,i;
    cin >> t;
    int factor =0;

    //write your code here
    
    for(i=1;i<=t;i++)
    {
        cin>>n;
        for(int div=1;div<=n;i++)
        {
            if(n%div==0)
            {
                factor= factor+1;
            }
            
        }
         if(factor==2){
            cout<<"Prime";
        }
        else{
            cout<<"Not Prime";
        }
       
    }
    
}