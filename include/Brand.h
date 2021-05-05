#pragma once
#include <BrandRecognition.h>
#include <Product.h>
#include <vector>
using namespace std;

class Brand
{
private:
    static Brand *instance;
    vector<BrandRecognition> brandRecognitions;

private:
    Brand();
    bool isExistBrand(const string &name);

public:
    static Brand *getBrand();

    vector<BrandRecognition> getBrandReconitions() const;

    void setBrandReconition(const string brandName, const string &logo, const string &trademark);
    void addProduct(const string &brandName, const string &type, const string &name, const int &price);

    void show() const;

    static void cleanBrand();
};
