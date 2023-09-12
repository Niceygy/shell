#include <string>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include "conf.h"

std::string readConf(int lineNumber) {
    //get user
    char* user = getenv("USER");
    std::string userString(user);
    std::string confPath = "/home/" + userString + "/.nsh";

    std::ifstream file("example.txt");
    std::string line;

    int i = 0;
    if (file.is_open()) {
        while (std::getline(file, line)) {
            if (i == lineNumber) {
                return line;
            }
            i++;
            std::cout << line << std::endl;
        }
        file.close();
    } else {
        std::cout << "Unable to open .nsh. Does it exist?" << std::endl;
    };  
}

void createConf() {
    char* user = getenv("USER");
    std::string userString(user);
    std::ofstream file("/home/" + userString + "/.nsh");

    if (file.is_open()) {
        file << "# NSH CONFIG FILE" << std::endl;
        file << "# FORMAT: name:value" << std::endl;
        file << "defaultFolder:/home/" << userString << std::endl;
        file << "welcomeMessage:true" << std::endl;
        file << "" << std::endl;
        file << "" << std::endl;
        file << "" << std::endl;
        file << "" << std::endl;
        file.close();
    } else {
        std::cout << "Unable to create .nsh!" << std::endl;
    }

}