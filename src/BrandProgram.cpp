#include <BrandProgram.h>

void BrandProgram::printMenu() 
{
    cout << "\n-----Brand Management Program-----" << endl;
    cout << "1. Add new Brand." << endl;
    cout << "2. Add new Product." << endl;
    cout << "3. Show list of Brands." << endl;
    cout << "0. Exit." << endl;
}

void BrandProgram::doTask(const int &choice) 
{
    switch(choice) {
        case ADD_NEW_BRAND:
            addNewBrand();
            break;
        case ADD_NEW_PRODUCT:
            addNewProduct();
            break;
        case SHOW_ALL_BRAND:
            showAllBrand();
            break;
        case EXIT:
            exitProgram();
            break;
        default:
            printError();
            break;
    }
}

void BrandProgram::addNewBrand() 
{
    hnb.setBrandRecognition();
}

void BrandProgram::addNewProduct() 
{
    hnb.addNewProduct();
}

void BrandProgram::showAllBrand() 
{
    hnb.showAllBrand();
}

void BrandProgram::exitProgram() 
{
    cout << "The program is stopped..." << endl;
}

void BrandProgram::printError() 
{
    cout << "Invalid choice!" << endl;
}

BrandProgram::~BrandProgram() 
{
    Brand::cleanBrand();
}