#include<iostream>
#include<cstdio>
#include<vector>
#include <cmath>
using namespace std;

int maxsubarray( vector<int> &A) {
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
     for(j=1;j<=alpha.size();j++){
        
        // A[i]=a/pow(10,(A.size()-i)-1);
        // a=a/10;
        // x[4-i] =  a%10;
        // a=a/10;
        //doubt
        // int f=a%10;
        
        // alpha[3]=f;
        // a=a/10;
        
        alpha[alpha.size()-j]=a%10;
        a=a/10;
    }
    // if(a%(A.size())==9){
    //     A[A.size()-2]=A[A.size()-2]+1;
    //     A[A.size()-1]=0;
    // }
    // else{
    //     A[A.size()-1]=A[A.size()-1]+1;
    // }
    
        
    return alpha[3];
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
