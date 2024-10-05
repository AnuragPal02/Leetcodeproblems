#include<bits/stdc++.h>
using namespace std;

int main(){
    int v = 9;
    int *z = &v;
    int b = 8;
    int &a = b;
    int &k  = b;
    int *p = &a; // here p stores the address of b, to access the value of b we have to use dereferencing
    int **u = &z;
    cout<<&u<<"address of u"<<endl;
    cout<<u<<"address it stores i.e z address"<<endl;
}