#include <HaNoiBranch.h>
#include <iostream>
using namespace std;

HaNoiBranch::HaNoiBranch()
{
    brand = Brand::getBrand();
}

void HaNoiBranch::setBrandRecognition()
{
    string name, logo, trademark;
    cout << "Enter brand name: ";
    cin >> name;
    cout << "Enter logo: ";
    cin >> logo;
    cout << "Enter trademark symbol: ";
    cin >> trademark;
    brand->setBrandReconition(name, logo, trademark);
}

void HaNoiBranch::addNewProduct()
{
    string brandName, type, name;
    int price;
    cout << "Enter brand of the product: ";
    cin >> brandName;
    cout << "Enter product type: ";
    cin >> type;
    cout << "Enter product name: ";
    cin >> name;
    cout << "Enter price: ";
    cin >> price;
    cout << endl;
    brand->addProduct(brandName, type, name, price);
}

void HaNoiBranch::showAllBrand() const
{
    cout << "\n-------Ha Noi Branch-------" << endl;
    brand->show();
}
