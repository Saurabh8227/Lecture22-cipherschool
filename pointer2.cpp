#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    int *p;
    int *q;
    p=&a;
    q=&b;
    a=2;
    b=5;
    c=*p+*q;

    cout<<"The value of c is : "<<c<<endl;
    cout<<"The address of a is: "<<&a<<endl;
	cout<<"The value of p is: "<<p<<endl;
    return 0;
}
