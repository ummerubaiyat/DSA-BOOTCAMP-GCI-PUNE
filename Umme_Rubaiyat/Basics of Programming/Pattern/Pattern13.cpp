#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
   //write your code here

    int a =0 ;
    int b=1;
    
   for (int i=0; i <n; i++)
   {   int val =1;
        for (int j=0; j <=i; j++)
        {   
            cout<<val<<"\t";
            val= (val * (i-j)) / (j+1);
           
            
                          
        } 
        
       cout<<endl; 
        
       

   }       
}