// given a number n print the following pattern

// Input Format

// 1st line has an integer t denoting number of test cases

// next t lines we have a single integer n

// Constraints

// 1

// Output Format

// print the following pattern as shown in next line.

// Sample Input 0

// 2
// 3
// 5
// Sample Output 0

// *
// **
// ***
// *
// **
// ***
// ****
// *****

 

#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char **argv){
    int n,i,t,j,k;
     cin >> t;
     
     for(i=0;i<t;i++)
     { cin >> n;
         for(j=1;j<=n;j++)
         {
             for(k=1;k<=j;k++)
         {
             cout<<"*";
         }
         cout<<"\n";
         }
     }
    
    

    //write your code here
     

    }
    