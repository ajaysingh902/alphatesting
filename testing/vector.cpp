#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;
 int main(){
     vector <string> hello;
     hello.push_back("hello");
     hello.push_back("ajay");
     hello.push_back("singh");
    //  vector<string>::iterator it=hello.begin();
    //  cout<<*it;
    hello.clear();
     for(vector<string>::iterator it=hello.begin();it<hello.end();it++){
         cout<<*it<<"\n";
     }
    for(int i=0;i<hello.size();i++){
        cout<<hello[i]<<"\n";
    }
    cout<<hello.capacity()<<"   ";
    cout<<hello.size();
    vector<int> blah(12);
    int g[]={1,2,3};
    int* p=g;
    cout<<"this is the address of g[]"<<*p;
    blah[0]=*g;
    cout<<"\n"<<blah[0];



     return 0;


 }

