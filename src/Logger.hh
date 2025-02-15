#pragma once
#include <iostream>
#include <string>

// Logt een bericht als ENABLE_LOGGING is gedefinieerd.
template <typename... Args>
void log(Args... args)
{
    #ifdef ENABLE_LOGGING
    (std::cout << ... << args) << "\n";
    #endif
}