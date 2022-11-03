#include <iostream>
#include <string>
#include "ReplaceHandler.h"

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cerr << "Usage: fileName stringToReplace newString" << std::endl;
        return 1;
    }

    if ((argv[1] != NULL && argv[1][0] == '\0') || (argv[2] != NULL && argv[2][0] == '\0')) {
        std::cerr << "Error: empty argument!" << std::endl;
        return 1;
    }

    ReplaceHandler replaceHandler(argv[1], argv[2], argv[3]);
    replaceHandler.process();

    return 0;
}