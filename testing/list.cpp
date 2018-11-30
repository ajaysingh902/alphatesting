#include <iostream>
#include <cstdio>
#include <list>
#include <vector>
using namespace std;
int main(){
    list<int> hello;
    hello.push_back(1);
    hello.push_back(2);
    hello.push_back(3);
    hello.push_back(4);
    list<int>::iterator it=hello.begin();
    vector<int> test;
    test.push_back(1);
    cout<<test[0]<<"\n";
    cout<<*it;

    
    return 0;
}