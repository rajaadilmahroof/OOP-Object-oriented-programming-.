#include<iostream>
using namespace std;

class Distance
{
	private:
		int feet;
		float inches;

	public:
		Distance(int f = 0, float i = 0.0)
		{
			feet = f;
			inches = i;
		}

		bool operator==(Distance d)
		{
			if(feet == d.feet && inches == d.inches)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		void display()
		{
			cout << "Feet: " << feet << " Inches: " << inches << endl;
		}
};

int main()
{
	Distance d1(5, 10.5);
	Distance d2(5, 12.5);

	d1.display();
	d2.display();

	if(d1 == d2)
	{
		cout << "Distances are equal." << endl;
	}
	else
	{
		cout << "Distances are not equal." << endl;
	}

	return 0;
}