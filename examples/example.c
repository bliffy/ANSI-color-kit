#include <stdio.h>

#include "ansicolorkit.h"

int main() {
    printf("%sHello %sWorld!%s\n",
           ansi.foreground.RED,
           ansi.style.UNDERLINE,
           ansi.RESET);
    return 0;
}

