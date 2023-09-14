#include <iostream>
#include <unistd.h>
#include <pwd.h>
#include <string>
#include "welcomeBanner.h"
#include "func/menus/welcomeBanner.h"

int welcome() {
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
