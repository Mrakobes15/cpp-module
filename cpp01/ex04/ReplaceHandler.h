#ifndef REPLACEHANDLER_H
#define REPLACEHANDLER_H

#include <iostream>

class ReplaceHandler {
private:
    std::string fileName;
    std::string s1;
    std::string s2;
    std::string replace ( std::string src, std::string s1, std::string s2 );

public:
    ReplaceHandler( std::string fileName, std::string s1, std::string s2 );
    ~ReplaceHandler();
    void process( void );
};


#endif
