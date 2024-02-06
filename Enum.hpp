
#ifndef ENUMS_H
#define ENUMS_H
#include "tools.hpp"


enum class ECcolor {
    white,orange,yellow,green,blue,red
    /*,red Red is the Error color */
};
const string colorStrings[] = { "White", "Orange", "Yellow", "Green", "Blue", "Red"};
ECcolor inputColor();
string colorToString(ECcolor color);

#endif
