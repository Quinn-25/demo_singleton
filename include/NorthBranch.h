#include <Brand.h>

class NorthBranch
{
private:
    Brand *brand;

public:
    NorthBranch();
    void setBrandRecognition();
    void addNewProduct();

    void showAllBrand() const;
};
