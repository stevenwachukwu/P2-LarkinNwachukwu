#ifndef ENUMS_H
#define ENUMS_H
#include "tools.hpp"
#include "Enum.hpp"

enum class ECcolor {
    white,orange,yellow,green, blue //,red
// Red is the Error color
};
ECcolor inputColor();
string colorToString(ECcolor color);

#endif
