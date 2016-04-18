/************************************************************************

    ANSI-color-kit
    https://github.com/bliffy/ANSI-color-kit

    Copyright (c) 2016 - Michael E Jolley

    This library is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as 
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this program.  
    If not, see <http://www.gnu.org/licenses/>.

************************************************************************/

#ifndef __ANSI_COLOR_KIT_H__
#define __ANSI_COLOR_KIT_H__

#ifdef __cplusplus

// use namespaces
namespace ansi {
    const char* RESET = "\e[00m";
    namespace foreground {
        const char* BLACK = "\e[30m";
        const char* RED = "\e[31m";
        const char* GREEN = "\e[32m";
        const char* YELLOW = "\e[33m";
        const char* BLUE = "\e[34m";
        const char* MAGENTA = "\e[35m";
        const char* CYAN = "\e[36m";
        const char* WHITE = "\e[37m";
        const char* DEFAULT = "\e[39m";
    }
    namespace style {
        const char* BOLD = "\e[01m";
        const char* ITALIC = "\e[03m";
        const char* UNDERLINE = "\e[04m";
        const char* INVERSE = "\e[07m";
        const char* STRIKETHROUGH = "\e[09m";
        const char* XBOLD = "\e[22m";
        const char* XITALIC = "\e[23m";
        const char* XUNDERLINE = "\e[24m";
        const char* XINTERSE = "\e[27m";
        const char* XSTRIKETHROUGH = "\e[29m";
    }
    namespace background {
        const char* BLACK = "\e[40m";
        const char* RED = "\e[41m";
        const char* GREEN = "\e[42m";
        const char* YELLOW = "\e[43m";
        const char* BLUE = "\e[44m";
        const char* MAGENTA = "\e[45m";
        const char* CYAN = "\e[46m";
        const char* WHITE = "\e[47m";
        const char* DEFAULT = "\e[49m";
    }
}

#else

// const members for C

const struct {
    const char* RESET;
    const struct {
        const char* BLACK;
        const char* RED;
        const char* GREEN;
        const char* YELLOW;
        const char* BLUE;
        const char* MAGENTA;
        const char* CYAN;
        const char* WHITE;
        const char* DEFAULT;
    } foreground;
    const struct {
        const char* BOLD;
        const char* ITALIC;
        const char* UNDERLINE;
        const char* INVERSE;
        const char* STRIKETHROUGH;
        const char* XBOLD;
        const char* XITALIC;
        const char* XUNDERLINE;
        const char* XINTERSE;
        const char* XSTRIKETHROUGH;
    } style;
    const struct {
        const char* BLACK;
        const char* RED;
        const char* GREEN;
        const char* YELLOW;
        const char* BLUE;
        const char* MAGENTA;
        const char* CYAN;
        const char* WHITE;
        const char* DEFAULT;
    } background;
} ansi = {
    "\e[00m", {
        "\e[30m",
        "\e[31m",
        "\e[32m",
        "\e[33m",
        "\e[34m",
        "\e[35m",
        "\e[36m",
        "\e[37m",
        "\e[39m"
    }, {
        "\e[01m",
        "\e[03m",
        "\e[04m",
        "\e[07m",
        "\e[09m",
        "\e[22m",
        "\e[23m",
        "\e[24m",
        "\e[27m",
        "\e[29m"
    }, {
        "\e[40m",
        "\e[41m",
        "\e[42m",
        "\e[43m",
        "\e[44m",
        "\e[45m",
        "\e[46m",
        "\e[47m",
        "\e[49m"
    }
};

#endif

#endif

