#include <SouthBranch.h>
#include <iostream>
using namespace std;

SouthBranch::SouthBranch()
{
    brand = Brand::getBrand();
}

void SouthBranch::setBrandRecognition()
{
    string name, logo, trademark;

    cout << "Adding product from South Branch" << endl;
    cout << "Enter brand name: ";
    cin >> name;
    cout << "Enter logo: ";
    cin >> logo;
    cout << "Enter trademark symbol: ";
    cin >> trademark;
    brand->setBrandReconition(name, logo, trademark);
}

void SouthBranch::addNewProduct()
{
    string brandName, type, name;
    cout << "Adding product from South Branch" << endl;
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

void SouthBranch::showAllBrand() const
{
    cout << "\n-------List from South Branch-------" << endl;
    brand->show();
}
