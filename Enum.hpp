
#ifndef ENUMS_H
#define ENUMS_H
#include "tools.hpp"


enum class ECcolor {
    white,orange,yellow,green,blue
    /*,red Red is the Error color */
};
const string colorStrings[] = { "white", "orange", "yellow", "green", "blue"/*, "red" */ };
ECcolor inputColor();
string colorToString(ECcolor color);

#endif
