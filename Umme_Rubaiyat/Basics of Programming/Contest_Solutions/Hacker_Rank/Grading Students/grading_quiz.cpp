
// Hackerrank 
// Grading Students
// HackerLand University has the following grading policy:

// Every student receives a  in the inclusive range from  to .
// Any  less than  is a failing grade.
// Sam is a professor at the university and likes to round each student's  according to these rules:

// If the difference between the  and the next multiple of  is less than , round  up to the next multiple of .
// If the value of  is less than , no rounding occurs as the result will still be a failing grade.

#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char **argv){
    int grades,n,i,t,j;
     cin >> t;
    
    

    //write your code here
    int  diff=3;
    for(j=0;j<t;j++)
     {cin >> grades;
        if(grades<38)
       {cout<<grades<<endl;} 
        else if(grades==38)
       {cout<<grades+2<<endl;} 
        else if(grades>38)
        {
            for(i=40;i<=100;i=i+5)
            {
                if(grades>i){
                    continue;
                }
                else{
                int x= abs(i-grades);
                    if(x<diff)
                    { 
                     
                    grades=i+0;
                    cout<<grades<<endl;
                    break;  
                    
                    }
                    else if (x>=diff && x<5)
                    {  
                    cout<<grades<<endl;
                    break;
                   
                    }
                }
                  
            }                
        }    
    }

    }
    