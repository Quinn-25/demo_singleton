#include <Product.h>

Product::Product()
{
    type = "";
    name = "";
    price = 0;
}

Product::Product(const string &type, const string &name, const int &price)
{
    setType(type);
    setProductName(name);
    setPrice(price);
}

string Product::getProductName() const
{
    return name;
}

void Product::setProductName(const string &name)
{
    this->name = name;
}

int Product::getPrice() const
{
    return price;
}

void Product::setPrice(const int &price)
{
    this->price = price;
}

string Product::getType() const
{
    return type;
}

void Product::setType(const string &type)
{
    this->type = type;
}

void Product::show() const
{
    cout << " | Type: " << type << "| Name: " << name << " | Price: $" << price << endl;
}