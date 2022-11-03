#include "ReplaceHandler.h"
#include <iostream>
#include <fstream>
#include <string>

ReplaceHandler::ReplaceHandler(std::string fileName, std::string s1, std::string s2) :
                fileName(fileName), s1(s1), s2(s2) {}

ReplaceHandler::~ReplaceHandler() {}

void ReplaceHandler::process() {
    std::ifstream ifstream(this->fileName);
    std::ofstream ofstream(this->fileName + ".replace");

    if (!ifstream) {
        std::cerr << "Error: Can't open file!" << std::endl;
        return;
    }

    std::string src;
    char ch;

    ifstream >> src;

    while (ifstream.get(ch)) {
        src += ch;
    }

    ofstream << replace(src, s1, s2);

    ifstream.close();
    ofstream.close();
}

std::string ReplaceHandler::replace(std::string src, std::string s1, std::string s2) {
    std::string dest;
    size_t index;

    std::cout << src << "\n";

    if (s1 == s2) {
        return src;
    }

    index = src.find(s1);

    while (index != std::string::npos) {
        dest = src.substr(0, index) + s2 + src.substr(index + s1.length());
        src = dest;
        index = src.find(s1);
    }

    return dest;
}