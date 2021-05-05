#pragma once
#include <iostream>
#include <string>
using namespace std;

#define EXIT 0

class MenuProgram
{
public:
    void run();
protected:
    virtual string getString() = 0;
    int getChoice();
    virtual void printMenu(const string &option) = 0;
    virtual void doTask(const string &option, const int &choice) = 0;
    virtual void printError() = 0;
};

