#include <iostream>
using namespace std;

class demo
{
    private:
    int x,y;
    public:
    demo(int a, int b)
    {
        x=a;
        y=b;
    }
    friend class demo1;
};
class demo1
{
    public:
    void display(demo d1)
    {
        cout<<"x is="<<d1.x;
        cout<<"y is="<<d1.y;
    }
};
int main()
{
    demo d2(10,40);
    demo1 f1;
    f1.display(d2);
    
}
    