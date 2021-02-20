#include <iostream>
using namespace std;

int main() {
	       int a=10,b=20;
	       int mul(int,int);
	       mul(a,b);        //actual argument
}
int mul(int x,int y)                         //formal arguments
{
    int s;
    s=x*y;
    cout<<"mul is "<<s;
}