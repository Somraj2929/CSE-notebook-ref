#include <iostream>
using namespace std;

int main()
{
    int a=10,b=25;
    int swap(int*,int*);
    cout<<"before function calling a="<<a;
    cout<<" b="<<b;
    swap(&a,&b);
    cout<<"\nafter function calling a="<<a;
    cout<<" b="<<b;
}
int swap(int *x, int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
    cout<<"\nValue of x="<<*x;
    cout<<" y="<<*y;
}