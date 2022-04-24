#include <iostream>
#include<cmath>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    
    //write your code here
    int nod=0;
    int num = n;
    
   
    while(num!=0){
        num /=10;
        nod++;
    }
    k = k % nod;
    
    if(k<0){
        k+= nod;
    }
    
    
    int div = pow(10,k);
    int mult = pow(10,nod-k);
    int q= n/div;
    int r = n % div;
    
    int ans= (r*mult) + q;
    cout<<ans<<endl;

}