#pragma once
#include <MenuProgram.h>
#include <NorthBranch.h>
#include <SouthBranch.h>
#include <Brand.h>
#include <iostream>
#include <vector>

#define NORTH_BRANCH "NB"
#define SOUTH_BRANCH "SB"
#define ADD_NEW_BRAND 1
#define ADD_NEW_PRODUCT 2
#define SHOW_ALL_BRAND 3

using namespace std;

class BrandProgram : public MenuProgram
{
private:
    NorthBranch nb;
    SouthBranch sb;
    void printMenu(const string &option);
    string getString();
    void doTask(const string &option, const int &choice);

    void addNewBrand(const string &branch);
    void addNewProduct(const string &branch);
    void showAllBrand(const string &branch) const;
    void exitProgram();
    void printError();

public:
    ~BrandProgram();
};
