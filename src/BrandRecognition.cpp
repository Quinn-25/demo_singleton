#include <BrandRecognition.h>

BrandRecognition::BrandRecognition()
{
    brandName = "Kentucky Fried Chicken";
    logo = "KFC";
    trademark = "(R)";
}

BrandRecognition::BrandRecognition(const string &brandName, const string &logo, const string &trademark)
{
    setBrandName(brandName);
    setLogo(logo);
    setTrademark(trademark);
}

string BrandRecognition::getBrandName() const
{
    return brandName;
}

string BrandRecognition::getLogo() const
{
    return logo;
}

string BrandRecognition::getTrademark() const
{
    return trademark;
}

vector<Product> BrandRecognition::getProducts() const
{
    return products;
}

void BrandRecognition::setBrandName(const string &brandName)
{
    this->brandName = brandName;
}

void BrandRecognition::setLogo(const string logo)
{
    this->logo = logo;
}

void BrandRecognition::setTrademark(const string &trademark)
{
    this->trademark = trademark;
}

void BrandRecognition::addProduct(const string &type, const string &name, const int &price)
{
    Product newProduct(type, name, price);
    products.push_back(newProduct);
}

void BrandRecognition::show() const
{
    cout << "\n- Brand Name: " << brandName << endl;
    cout << "- Logo: " << logo << endl;
    cout << "- Trademark: " << trademark << endl;
    cout << "- List of products: " << endl;
    if (products.size() == 0)
        cout << "   The list of products is empty!" << endl;
    else
    {
        for (int i = 0; i < products.size(); i++)
        {
            cout << "   ->";
            products[i].show();
        }
    }
}

bool BrandRecognition::isExistProduct(const string &name)
{
    for (int i = 0; i < products.size(); i++)
    {
        if (products[i].getProductName() == name)
            return true;
    }

    return false;
}