#include<iostream>
using namespace std;
class Product
{
	private:
		string name;
		double price;
	public:
		Product(string n, double p)
		{
			name = n;
			price = p;
		}
		string getName()
		{
			return name;
		}
		double getPrice()
		{
			return price;
		}
};
class Electronics : public Product
{
	private:
	    int warenty_Year;
	public:
		Electronics(string n, double p, int w) : Product(n, p)
		{
			warenty_Year = w;
		}
		void display()
		{
			cout<<"Product: "<<getName();
			cout<<"\nPrice: $"<<getPrice();
			cout<<"\nWarenty Years: "<<warenty_Year<<" years";
		}
	    
	
};
int main()
{
	Electronics e("Refrigerator", 60000, 2);
	e.display();
	return 0;
	
}
