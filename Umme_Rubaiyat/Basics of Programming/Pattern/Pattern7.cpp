#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int stars =1;
    int spaces =0;
   //write your code here
   
   for (int i=1; i <=n; i++)
   {   
        for (int j=1; j <=n; j++)
        { 
            if(i==j)
            {
                cout<<"*";
            }
            else
            {
                cout<<"\t";
            }
                 
                 
        }
        
       cout<<endl;       

   }
   
        
}