#include <iostream>
#include <unistd.h>
#include <pwd.h>
#include <string>

//FUNCS
#include "func/menus/help.h"
#include "handlers/handle.h"

int welcome()
{
    char hostname[1024];
    gethostname(hostname, 1024);

    uid_t uid = geteuid();
    struct passwd *pw = getpwuid(uid);
    const char *username = pw->pw_name;

    std::string welcomeMessage = "Welcome to ";
    welcomeMessage += hostname;
    welcomeMessage += "! \nYou are logged in as ";
    welcomeMessage += username;
    welcomeMessage += "\n";
    welcomeMessage += "Type 'help' for a list of commands.\n";

    std::cout << welcomeMessage;

    return 0;
};

std::string input() {
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
       handleInput(userRequest);

    };
    
    input();
    return 0;
}