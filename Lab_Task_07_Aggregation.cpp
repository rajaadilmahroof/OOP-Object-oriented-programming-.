#include <iostream>
#include <string>
using namespace std;
class SharedCalculator
{

    public:
        double add(double a, double b)
        {
            return a + b;
        }
        double multiply(double a, double b)
        {
            return a * b;
        }
};
class Student 
{

    private:
        string name;
        SharedCalculator* calculator; 

    public:
        Student(string n, SharedCalculator* calc)
        {
            name = n;
            calculator = calc;

        }

    void solveMath(double x, double y)
    {
        if (calculator)
        {
            double result = calculator->add(x, y);
            cout<<name<<" solved calculation. Result: "<<result<<endl;
        }
    }
};

int main()
{
    SharedCalculator teacherCalc;
    Student s1("Alice", &teacherCalc);
    Student s2("Bob", &teacherCalc);

    s1.solveMath(5, 5); 
    s2.solveMath(2, 3); 

    return 0;
}

