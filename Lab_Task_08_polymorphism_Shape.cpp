#include<iostream>
using namespace std;
class Shape
{
	public:
		virtual double Area()
		{
			return 0;
			
		}
	
};
class Rectangle : public Shape
{
	public:
		float length = 8.6, width = 6.0;
	    double Area() override
		{
			return length * width;
		}
	
};
class Circle : public Shape
{
	public:
		float radius = 7.8;
	    double Area() override
	    {
	        return 3.14 * radius * radius;	
		
	    }
	
};
int main()
{
	Shape*s;
	s = new Rectangle;
	cout<<"\nArea of rectangle: "<<s->Area();
	delete s;
	
	s = new Circle;
	cout<<"\nArea of circle: "<<s->Area();
	delete s;
	return 0;
	
	
}
