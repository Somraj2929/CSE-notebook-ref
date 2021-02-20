#include <iostream>
using namespace std;

int main()
{
    int fac(int);
    int n, fact;
    cout<<"enter the no.";
    cin>>n;
    fact=fac(n);
    cout<<"\nfactorial is "<<fact;
}
int fac(int a)
{
    int b;
    if(a<=1)
    {
        return(1);
    }
    else
    {
        b=a*fac(a-1);
        return(b);
    }
}