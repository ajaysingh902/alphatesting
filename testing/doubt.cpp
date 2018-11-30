#include <iostream>
#include <cstdio>
using namespace std;
int* hello(int a ,int b){
    int* y= new int;
    *y=a+b;
    
return y;
}

int main() {
    int* (*p)(int,int);
    p=&hello;
    int* c=(*p)(1,2);
    cout<<"this is the value  "<<*c;

    return 0;

}
