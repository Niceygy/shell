#include <iostream>
#include <unistd.h>
#include <pwd.h>
#include <string>

//FUNCS
#include "func/menus/help.h"
#include "handlers/handle.h"
#include "func/menus/welcomeBanner.h"


std::string input() {
    std::cout << ">> ";
    std::string input;
    std::cin >> input;
    return input;
}

int handleInput(std::string input) {
    if (input == "help") {
        std::cout << "help";
    }
    return 0;
}

int main()
{
    welcome();
    while (true) {
       std::string userRequest = input();
       handle(userRequest);

    };
    
    input();
    return 0;
}