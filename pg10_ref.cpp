#include<iostream>
using namespace std;

class abc{
    private:
    
    int rollno;
    string name;
    
    public:
    void getdata(){
        cout<<"name=";
        cin>>name;
        cout<<"rollno=";
        cin>>rollno;
    }
    
    void display(){
        cout<<"name="<<name;
        cout<<"rollno="<<rollno;
    }
};

int main(){
    abc student;
    student.getdata();
    student.display();
}