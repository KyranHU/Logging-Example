#include "Logger.h"
#include <iostream>

void log(const std::string &message){
    #ifdef ENABLE_LOGGING
    std::cout << message << "\n";
    #endif
}