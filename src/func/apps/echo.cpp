#include <string>
#include <iostream>
#include <fstream>
#include "header.h"


/**
 * @brief Echoes a string to the console
*/
void echo(std::string input) {
    std::cout << input;
    return;
}
/**
 * @brief Echoes a file to the console
*/
void echoFile(std::string fileName) {
    std::ifstream file(fileName);
    std::string line;

    if (file.is_open()) {
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }

}