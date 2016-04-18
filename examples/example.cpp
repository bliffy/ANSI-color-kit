#include <iostream>

#include "ansicolorkit.h"

int main() {
    std::cout<< ansi::foreground::RED
             << "Hello "
             << ansi::style::UNDERLINE
             << "World!"
             << ansi::RESET
             << std::endl;
    return 0;
}

