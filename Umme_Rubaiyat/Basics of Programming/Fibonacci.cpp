// 1. You've to print first n fibonacci numbers.
// 2. Take as input "n", the count of fibonacci numbers to print.
// 3. Print first n fibonacci numbers.
#include <iostream>
using namespace std;
int main(){
    int fst,snd,i,n;
    cin>>n;
    int temp=0;
    fst=0;
    snd=1;
    for(i=1;i<=n;i++)
    { 
      cout<<fst<<endl;
      temp=fst+snd;
       
      fst=snd;
      snd=temp;
      
    }
   
    
}