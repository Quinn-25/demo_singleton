#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <Product.h>
using namespace std;

class BrandRecognition
{
private:
    string brandName;
    string logo;
    string trademark;
    vector<Product> products;
    bool isExistProduct(const string &name);

public:
    BrandRecognition();
    BrandRecognition(const string &brandName, const string &logo, const string &trademark);
    string getBrandName() const;
    string getLogo() const;
    string getTrademark() const;
    vector<Product> getProducts() const;

    void setBrandName(const string &brandName);
    void setLogo(const string logo);
    void setTrademark(const string &trademark);
    void addProduct(const string &type, const string &name, const int &price);

    void show() const;
};
