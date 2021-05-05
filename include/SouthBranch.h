#include <Brand.h>

class SouthBranch
{
private:
    Brand *brand;

public:
    SouthBranch();
    void setBrandRecognition();
    void addNewProduct();

    void showAllBrand() const;
};
