#include <iostream>
using namespace std;

int main()
{
    int i=10;
    int &j=i;                   //j is a reference variable of i
    cout<<"value  "<<i<<"\t"<<j;
    j=20;
    cout<<"\nmodified value  "<<i<<"\t"<<j;
}