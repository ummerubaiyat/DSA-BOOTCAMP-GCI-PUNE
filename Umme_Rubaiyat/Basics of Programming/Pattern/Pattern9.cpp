#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int spaces =n ;
   //write your code here
   
   for (int i=1; i <=n; i++)
   {   
        for (int j=1; j <=n; j++)
        { 
            if(i==j|| i+j==n+1)
            {
                cout<<"*\t";
            }
             else{
                  cout<<"\t";
             }
                
              
                
        }
       
         
       cout<<endl;

   }
   
        
}