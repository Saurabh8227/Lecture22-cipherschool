#include<iostream>
using namespace std;
int main()
{
    int a;
    int *p;
    p=&a;
    a=1;
    cout<<"The value of a is (from the actual variable type): "<<a<<endl;
    cout<<"The value of a from the pointer using *(asterisk / indirection operator): "<<*p<<endl;
    return 0;
}
