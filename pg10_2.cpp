#include<iostream>
using namespace std;
class abc
{
    private:
    
    int rollno;
    char name[20];
    public:
    void getdata();
    void display();
};
void abc::getdata()
{
    cout<<"name=";
    cin>>name;
    cout<<"rollno=";
    cin>>rollno;
}    
void abc::display()
{
    cout<<"name and rollno=";
    cout<<name<<rollno;
}
int main()
{ abc student;
    student.getdata();
    student.display();
}