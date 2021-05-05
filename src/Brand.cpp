#include <Brand.h>

// can only create instance in getBrand funtion(not even from defaut constructor)
Brand *Brand::instance = NULL;

Brand::Brand()
{
}

Brand *Brand::getBrand()
{
    if (instance == NULL)
    {
        instance = new Brand();
    }
    return instance;
}

vector<BrandRecognition> Brand::getBrandReconitions() const
{
    return brandRecognitions;
}

void Brand::setBrandReconition(const string brandName, const string &logo, const string &trademark)
{
    BrandRecognition br(brandName, logo, trademark);
    brandRecognitions.push_back(br);
}

void Brand::addProduct(const string &brandName, const string &type, const string &name, const int &price)
{
    if (!isExistBrand(brandName))
        cout << "This brand is not existed" << endl;
    else
    {
        for (int i = 0; i < brandRecognitions.size(); i++)
        {
            if (brandName == brandRecognitions[i].getBrandName())
            {
                brandRecognitions[i].addProduct(type, name, price);
            }
        }
    }
}

void Brand::show() const
{
    if (brandRecognitions.size() == 0)
        cout << "The list of brands is empty!" << endl;

    else
    {
        for (int i = 0; i < brandRecognitions.size(); i++)
        {
            brandRecognitions[i].show();
        }
    }
}

bool Brand::isExistBrand(const string &name)
{
    for (int i = 0; i < brandRecognitions.size(); i++)
    {
        if (name == brandRecognitions[i].getBrandName())
        {
            return true;
        }
    }
    return false;
}

void Brand::cleanBrand()
{
    if (instance != NULL)
    {
        delete instance;
        instance = NULL;
    }
}
