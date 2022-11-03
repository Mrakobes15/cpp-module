#include <iostream>

int main(void) {
    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    std::cout << "address of the string variable:\t" << &string << std::endl;
    std::cout << "address held by stringPTR:\t" << stringPTR << std::endl;
    std::cout << "address held by stringREF:\t" << &stringREF << std::endl;

    std::cout << "value of the string variable:\t" << string << std::endl;
    std::cout << "value pointed to by stringPTR:\t" << *stringPTR << std::endl;
    std::cout << "value pointed to by stringREF:\t" << stringREF << std::endl;

    return 0;
}