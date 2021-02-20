#include <iostream>
using namespace std;

int main() {
	int print();               //func declaration
	cout<<"no parameter and no return value";
	print();                    //func calling
}
int print()                     //func definition
{
    for(int i=1;i<=30;i++)
    {
        cout<<"*";
    }
    cout<<"\n";
}