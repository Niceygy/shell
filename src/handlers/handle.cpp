#include <string>
#include "handle.h"
#include "../func/menus/help.h"

std::string handle(std::string input = "") {
    if (input == "") {
        return "Please enter a command";
    } else if (input == "help") {
        return helpMenu(true);
    } else {
        return "Unknown command";
    }
}