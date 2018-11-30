#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main(){
    vector < vector <int> > hello(3,vector <int>(4,7) );
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++)
        {
            cout<<hello[i][j];
        }
    }
    return 0;

}