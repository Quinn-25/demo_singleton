#include <Brand.h>

class HaNoiBranch
{
private:
    Brand *brand;

public:
    HaNoiBranch();
    void setBrandRecognition();
    void addNewProduct();

    void showAllBrand() const;
};
