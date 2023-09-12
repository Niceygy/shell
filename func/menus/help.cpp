#include <string>
#include <iostream>
#include "help.h"


/**
 * Displays the help menu
 * returnText - Whether to return the text or not
 * (default: false)
*/
std::string helpMenu(bool returnText = false) {
    std::string helpMessage1 = "Welcome to the help menu!\n";
    helpMessage1 += "These are the commands you can use:\n";
    helpMessage1 += "help - Displays this menu\n";
    helpMessage1 += "exit - Exits the shell\n";
    helpMessage1 += "echo - Outputs the input\n";
    helpMessage1 += "cd - Changes the current directory (folder)\n";
    helpMessage1 += "ls - Lists the contents of the current directory\n";
    helpMessage1 += "sysinfo - Displays system information\n";
    helpMessage1 += "clear - Clears the screen\n";
    if (returnText) {
        return helpMessage1;
    } else {
        std::cout << helpMessage1;
        return "";
    }
    //std::cout << helpMessage1;

    return;
};

