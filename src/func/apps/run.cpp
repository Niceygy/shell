#include <string>
#include <cstdlib>
#include "header.h"


void runBinary(std::string name) {
    system(("/bin/bash -c \"" + name + "\"").c_str());
    return;
}

