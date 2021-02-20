#include <iostream>
using namespace std;

int main() {
	       int a=10,b=20;
	       int sum();
	       int c=sum();                 //actual argument
	       cout<<"Sum is "<<c;
}
int sum()                           //formal arguments
{
    int x=10,y=20;
    return(x+y);                    //return value
}