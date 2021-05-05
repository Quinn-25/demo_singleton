#pragma once
#include <MenuProgram.h>
#include <HaNoiBranch.h>
#include <Brand.h>
#include <iostream>
#include <vector>

#define HANOI_BRANCH "HN"
#define SAIGON_BRANCH "SG"
#define ADD_NEW_BRAND 1
#define ADD_NEW_PRODUCT 2
#define SHOW_ALL_BRAND 3

using namespace std;

class BrandProgram : public MenuProgram
{
private:
    HaNoiBranch hnb;
    void printMenu();
    void doTask(const int &choice);

    void addNewBrand();
    void addNewProduct();
    void showAllBrand();
    void exitProgram();
    void printError();

public:
    ~BrandProgram();
};
