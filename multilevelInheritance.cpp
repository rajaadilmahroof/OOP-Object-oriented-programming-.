#include<iostream>
using namespace std;
class person
{
    public:
    string name = "Husnaat";
    int age = 21;
    void display_person()
    { 
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Employee : public person
{
    public:
    int employee_id = 12345;
    void display_employee()
    {
        cout<<"Employee ID: "<<employee_id<<endl;
    }
};
class Manager : public Employee
{
    public:
    string department = "Sales";
    void display_manager()
    {
        cout<<"Department: "<<department<<endl;
    }
};

int main()
{
    Manager m1;
    m1.display_person();
    m1.display_employee();
    m1.display_manager();

    return 0;
}