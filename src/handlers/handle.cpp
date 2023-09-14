#include <string>
#include <iostream>
#include "handle.h"
//#include "../func/menus/help.h"

void helpMenu2() {
    std::string helpMessage1 = "Welcome to the help menu!\n";
    helpMessage1 += "These are the commands you can use:\n";
    helpMessage1 += "help - Displays this menu\n";
    helpMessage1 += "exit - Exits the shell\n";
    helpMessage1 += "echo - Outputs the input\n";
    helpMessage1 += "cd - Changes the current directory (folder)\n";
    helpMessage1 += "ls - Lists the contents of the current directory\n";
    helpMessage1 += "sysinfo - Displays system information\n";
    helpMessage1 += "clear - Clears the screen\n";
    return;
};

std::string handle(std::string inputFull) {
    std::string input = inputFull.substr(0, inputFull.find(" "));
    std::cout << input;
    if (input == "") {
        return "Please enter a command";
    } else if (input == "help") {
        helpMenu2();
        return "";
    } else {
        return "Unknown command";
    }
}