
#include <iostream>
#include <cstdio>
using namespace std;
int sum(int* A)
{ *(A+1) =*(A+3);
return A[1];

}
int main(){
    int A[]={1,2,3,4,5};
    printf("hello bhai %d \n",sum(A));
    cout<<sum(A);

}

//hoora se puchana hai 