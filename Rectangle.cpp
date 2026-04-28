#include<iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    Rectangle()
    {
        length = 1.0;
        width = 1.0;
    }

    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    Rectangle(float s)
    {
        length = s;
        width = s;
    }

    float Area()
    {
        return length * width;
    }
};

int main()
{
    Rectangle r;
    Rectangle r1(5.8, 6.7);
    Rectangle r2(4.5);

    cout << "Area: " << r.Area() << endl;
    cout << "Area: " << r1.Area() << endl;
    cout << "Area: " << r2.Area() << endl;

    return 0;
}
