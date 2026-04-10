#include<iostream>
#include<string>
using namespace std;

class Product
{
private:
    string name;
    double price;
    int quantity;

public:

    void setName(string n)
    {
        if(!n.empty())
            name = n;
        else
            cout<<"Name cannot be empty."<<endl;
    }

    void setPrice(double p)
    {
        if(p > 0)
            price = p;
        else
            cout<<"Price must be positive."<<endl;
    }

    void setQuantity(int q)
    {
        if(q > 0)
            quantity = q;
        else
            cout<<"Quantity cannot be negative."<<endl;
    }

    string getName()
    {
        return name;
    }

    double getPrice()
    {
        return price;
    }

    int getQuantity()
    {
        return quantity;
    }
};

int main()
{
    Product pr;

    string name;
    double price;
    int quantity;

    cout<<"Enter name: ";
    getline(cin, name);
    pr.setName(name);

    cout<<"Enter price: ";
    cin>>price;
    pr.setPrice(price);

    cout<<"Enter quantity: ";
    cin>>quantity;
    pr.setQuantity(quantity);

    cout<<"\nProduct Details"<<endl;
    cout<<"Name: "<<pr.getName()<<endl;
    cout<<"Price: "<<pr.getPrice()<<endl;
    cout<<"Quantity: "<<pr.getQuantity()<<endl;

    return 0;
}