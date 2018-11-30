#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int maxsubarray( vector<int> &A) {
    int x=0;
    int i,j,k,l;
    A[A.size()-1]=A[A.size()-1]+1;
    int carry=A[A.size()-1]/10;
    
    for( i=(2);i<=A.size();i++)
    {
        if(carry==1)
        {  
            A[A.size()-i]=A[A.size()-i]+1;
            carry=A[A.size()-i]/10;
        }
        
    }
    if(carry==1){
        A.insert(A.begin(),1);
    }
    if(A[0]==0&&carry==0){
         vector<int>::iterator it; 
  
    it = A.begin(); 
    A.erase(it); 
        A.remove(A.begin());
    }

    return x;
}

int main(){
    vector <string> hello;
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