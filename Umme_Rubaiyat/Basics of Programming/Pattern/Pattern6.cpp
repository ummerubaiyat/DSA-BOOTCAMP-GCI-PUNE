#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int stars =n/2+1;
    int spaces =1;
   //write your code here
   
   for (int i=1; i <=n; i++)
   {   
        for (int k=1; k <=stars; k++)
        {   
             
                cout<<"*\t";
             
                    
        }
       for (int j=1; j <=spaces; j++)
        { 
             
                 cout<<"\t";
              
                
        }
       
       
       for (int k=1; k <=stars; k++)
        {   
             
                cout<<"*\t";
             
                    
        }
        if(i<=n/2)
        {
            stars --;
            spaces+=2;
        }
        else
        {
            stars++;
            spaces-=2;
        }
       cout<<endl;
        
      
       
         
          
         

   }
   
        
}