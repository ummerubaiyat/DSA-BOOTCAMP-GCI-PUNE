#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int stars =n;
    int spaces =1;
   //write your code here
   
   for (int i=1; i <=n; i++)
   {
       for (int k=1; k <=stars; k++)
        { 
             cout<<"*\t";
               
        }
       cout<<endl;
       for (int j=1; j <=spaces; j++)
        { 
            cout<<"\t";
            
                
        }
        
      
       
         
         stars--;
         spaces++;

   }
   
        
}