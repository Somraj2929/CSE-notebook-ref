#include <iostream>
using namespace std;

int main() {
	int a=10,b=20;
	int sum(int,int);
	int c=sum(a,b);         //actual arguments
	cout<<"sum is "<<c;
}
int sum(int x, int y)           //formal arguments
{
    int s;
    s=x+y;
    return(s);              //return value
}