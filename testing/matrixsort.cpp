#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
vector <int> spiral(vector<vector<int> > A)
{
    /**
     * m=maximum row index
     * k=minimum row index 
     * n=maximum coloumn index 
     * l=minimum coloumn index
     * 
     * **/
    int k=0,l=0;
    int m=A.size();
    int n=A[0].size();
    
    while(k<m&&l<n){

        for(int i=l;i<=n-1;i++)
        {

        }
        k++;
        for(int j=k;j<=m;j++)
        {

        }
        m--;
        for(int i=m-1;i>=l;i--)
        {

        }
        m--
        for(int i=n-1;i>=k;i--)
        {

        }
        l--

        
    }
}

int main()
{

}