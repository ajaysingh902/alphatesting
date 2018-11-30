#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int maxsubarray(const vector<int> &A) {
    int max_tillnow=0;
    int lastmax=0;
    int maxneg=A[0];
    int lastneg=A[0];
    int absolute;
    int alpha=A.size();
    for(int i=0;i<alpha;i++){
    if(lastmax+A[i]<0){
                lastmax=0;
            }
            else
            {
                lastmax+=A[i];
                max_tillnow=max(max_tillnow,lastmax);
                
            }

    }
   
   
    for(int i=0;i<alpha;i++)
    {  
        
        lastneg=max(A[i],lastneg+A[i]);
        maxneg=max(lastneg,maxneg);

    }
    if(maxneg<0)
    {
        return maxneg;
    }
    else{
        return max_tillnow;
    }
    
    
}
int main(){
    vector<int> vect;
    vect.push_back(5);
    vect.push_back(-4);
    vect.push_back(2);
    vect.push_back(-1);
    vect.push_back(5);
    vect.push_back(-2);
    int max=maxsubarray(vect);
    cout<<max;
        
    return 0;
}
 // if(lastmax+A[i]<0){
        //     lastmax=0;
        // }
        // else
        // {
        //     lastmax+=A[i];
        //     max_tillnow=max(max_tillnow,lastmax);
            
        // }