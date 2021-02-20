#include<iostream>
using namespace std;
int main()
{
    
    void sum(int,int);  //function declaration
    int a,b;
    cout<<"enter the two number";
    cin>>a>>b;
    sum(a,b);           //function calling
    
}
int sum(int x, int y)      //function definition
{
    int c=x+y;
    cout<<"sum is  "<<c;
}
