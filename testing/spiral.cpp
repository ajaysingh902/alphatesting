#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > spiralPrint(int A)
{
         int k=0,l=0;
    
    
    int m=A;
    int n=m;
    
    int x=0;

    vector<vector<int> > hello(n,vector<int>(m));

    while (k<m&&l<n)
    {   //rightwards
        for(int i=l;i<n;++i)
        {   ++x;
            hello[k][i]=x;
            
        }
        k++;
        //downwards
        for(int j=k;j<m;++j)
        {   
            ++x;
            hello[j][n-1]=x;
        }
        n--;
        //left 
         if ( k < m) 
        { 
            for(int i=n-1;i>=l;--i)
            {   ++x;
                hello[m-1][i]=x;
            } 
            m--;
        }
        
        //right

        if(l<n)
        {   
            for(int i=m-1;i>=k;--i)
            {   ++x;
                hello[i][l]=x;
            }
            l--;
        }
    }
    return hello;
        

    }

int main()
{
    int b,c;
    int a=3;
    vector<vector<int> > result;

    result=spiralPrint(a);
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            cout<<result[i][j];
        }
    }
    return 0;
}