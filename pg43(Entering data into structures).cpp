#include <iostream>
using namespace std;

int main()
{
    struct employee_type
    {
        int code;
        char name[25];
        char dept[15];
        float salary;
    };
    
    struct employee_type employee;
    cout<<"\nEnter employee code:\n";
    cin>>employee.code;
    cout<<"\nEnter name:\n";
    gets(employee.name);
    cout<<"\nEnter employee's dept:\n";
    gets(employee.dept);
    cout<<"\nEnter employee salary:\n";
    cin>>employee.salary;
    cout<<"\n\nParticulars of emp as entered by user\n";
    cout<<"\nEmployees code:"<<employee.code;
    cout<<"\nEmployee's name:"<<employee.name;
    cout<<"\nEmployee's dept:"<<employee.dept;
    cout<<"\nEmployee's sal:"<<employee.salary;
}

