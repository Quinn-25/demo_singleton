#include <BrandProgram.h>

void BrandProgram::printMenu(const string &branch)
{
    if (branch == NORTH_BRANCH)
        cout << "\nBrand Management Program (North Branch)" << endl;
    if (branch == SOUTH_BRANCH)
        cout << "\nBrand Management Program (South Branch)" << endl;
    cout << "       1. Add new Brand." << endl;
    cout << "       2. Add new Product." << endl;
    cout << "       3. Show list of Brands." << endl;
    cout << "       0. Exit." << endl;
}

string BrandProgram::getString()
{
    string branch;
    cout << endl
         << "List of branch: " << endl
         << "   - North Branch (" << NORTH_BRANCH << ")" << endl
         << "   - South Branch (" << SOUTH_BRANCH << ")" << endl;
    cout << "Select system from branch: ";
    cin >> branch;
    return branch;
}

void BrandProgram::doTask(const string &branch, const int &choice)
{
    switch (choice)
    {
    case ADD_NEW_BRAND:
        addNewBrand(branch);
        break;
    case ADD_NEW_PRODUCT:
        addNewProduct(branch);
        break;
    case SHOW_ALL_BRAND:
        showAllBrand(branch);
        break;
    case EXIT:
        exitProgram();
        break;
    default:
        printError();
        break;
    }
}

void BrandProgram::addNewBrand(const string &branch)
{
    if (branch == NORTH_BRANCH)
        nb.setBrandRecognition();
    if (branch == SOUTH_BRANCH)
        sb.setBrandRecognition();
}

void BrandProgram::addNewProduct(const string &branch)
{
    if (branch == NORTH_BRANCH)
        nb.addNewProduct();
    if (branch == SOUTH_BRANCH)
        sb.addNewProduct();
}

void BrandProgram::showAllBrand(const string &branch) const
{
    if (branch == NORTH_BRANCH)
        nb.showAllBrand();
    if (branch == SOUTH_BRANCH)
        sb.showAllBrand();
}

void BrandProgram::exitProgram()
{
    cout << "The program is stopping..." << endl;
    cout << "Thank you for using our service!" << endl;
}

void BrandProgram::printError()
{
    cout << "Invalid choice!" << endl;
}

BrandProgram::~BrandProgram()
{
    Brand::cleanBrand();
}