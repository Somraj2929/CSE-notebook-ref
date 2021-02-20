#include <iostream>
using namespace std;

int main() {
	       int sum(int x=10, int y=20);
	       sum();
}
int sum(int a1, int a2)
{
    int temp;
    temp=a1+a2;
    cout<<"sum is "<<temp;
}