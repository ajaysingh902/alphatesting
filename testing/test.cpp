#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    int a = 1235;
    int h;
    int x[4];

    for (int i = 1; i <= 4; i++)
    {
        
        x[4-i] =  a%10;
        a=a/10;
    }
    for(int i=0;i<4;i++){
        printf("%d \n",x[i]);
    }

    return 0;
}