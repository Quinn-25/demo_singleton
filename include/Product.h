#pragma once
#include <string>
#include <iostream>
using namespace std;

class Product
{
protected:
    string type;
    string name;
    int price;

public:
    Product();
    Product(const string &type, const string &name, const int &price);

    string getType() const;
    string getProductName() const;
    int getPrice() const;

    void setType(const string &type);
    void setProductName(const string &name);
    void setPrice(const int &price);

    void show() const;
};
