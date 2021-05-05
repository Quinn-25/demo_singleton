#include <MenuProgram.h>

void MenuProgram::run() 
{
   bool running = true;
   int choice;
    while(running) {
        printMenu();
        choice = getChoice();
        doTask(choice);
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