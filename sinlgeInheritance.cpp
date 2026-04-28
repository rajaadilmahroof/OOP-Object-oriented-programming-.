#include<iostream>
using namespace std;
class person
{
    private:
    string name;
    int age;
    public:
    void set_person(string n, int a)
    {
        name = n;
        age = a;
    }
    void display_person_info()
    {
        
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class student : public person
{
    private:
    int student_id;
    public:
    void input()
    {
        string n;
        int a;
        cout<<"Enter name: ";
        cin>>n;
        cout<<"Enter age: ";
        cin>>a;
        cout<<"Enter student ID: ";
        cin>>student_id;
        set_person(n, a);
    }

    void display_student_info()
    {
        
        cout<<"Student ID: "<<student_id<<endl;
    }
};

int main()
{
    
    student s1;
    s1.input();
    s1.display_student_info();
    return 0;
}