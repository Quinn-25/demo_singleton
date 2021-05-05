#include <MenuProgram.h>

void MenuProgram::run() 
{
   bool running = true;
   int choice;
   string option;
    while(running) {
        option = getString();
        printMenu(option);
        choice = getChoice();
        doTask(option, choice);
        if (choice == EXIT) running = false;
    }
}

int MenuProgram::getChoice() 
{
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}