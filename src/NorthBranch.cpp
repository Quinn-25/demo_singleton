#include <NorthBranch.h>
#include <iostream>
using namespace std;

NorthBranch::NorthBranch()
{
    brand = Brand::getBrand();
}

void NorthBranch::setBrandRecognition()
{
    string name, logo, trademark;
    cout << "Adding brand from North Branch" << endl;
    cout << "Enter brand name: ";
    cin >> name;
    cout << "Enter logo: ";
    cin >> logo;
    cout << "Enter trademark symbol: ";
    cin >> trademark;
    brand->setBrandReconition(name, logo, trademark);
}

void NorthBranch::addNewProduct()
{
    string brandName, type, name;
    cout << "Adding product from North Branch" << endl;
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

void NorthBranch::showAllBrand() const
{
    cout << "\n-------North Branch-------" << endl;
    brand->show();
}
