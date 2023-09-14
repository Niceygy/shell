#include <string>
#include "handle.h"
#include "../func/menus/help.h"
#include "handle.h"

std::string handle(std::string input) {
    if (input == "") {
        return "Please enter a command";
    } else if (input == "help") {
        helpMenu();
        return "";
    } else {
        return "Unknown command";
    }
}