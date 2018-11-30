#include<iostream>
#include<cstdio>
#include<vector>
#include <cmath>
using namespace std;

vector<int> maxsubarray( vector<int> &A) {
    int b,c;
    int a=0;
    int h;
    int i;
    int j;
    vector<int> alpha;
    alpha=A;
    for(i=0;i<A.size();i++){
        
        a+=A[i]*pow(10,(A.size()-i)-1);
    }
    a=a+1;
    if(a%(A.size())==9&&A[0]==9){
     for(j=1;j<=alpha.size()+1;j++){
       
        
        alpha[alpha.size()-j]=a%10;
        a=a/10;
    }
    }
    else
    {
         for(j=1;j<=alpha.size()+1;j++){
        
        
        alpha[alpha.size()-j]=a%10;
        a=a/10;
    }
    }
    return alpha;
    }
  
    
        
    
    
    
    

   
    
    

int main(){
    vector<int> vect;
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
    // vect.push_back(5);
    // vect.push_back(-2);
    vector<int> end;
    int x=maxsubarray(vect);
    // end=maxsubarray(vect);
    cout<<x;
        
    return 0;
}
