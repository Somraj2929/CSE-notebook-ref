#include <iostream>
using namespace std;

class demo
{
    int x;
    public:
    demo(int a)
    {
        x=a;
    }
    friend void display(demo);
};
void display(demo d1)
{
    cout<<d1.x;
}
int main()
{
    demo d2(5);
    display(d2);
}