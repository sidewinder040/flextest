#include "testblock.h"

float testblock::GetDensity() {
    double cmCubed = (Width * Hight * Lenght) / 10; // cubed centimeters
    return  cmCubed / Weight; // Density 
}

testblock::testblock(/* args */)
{
}

testblock::~testblock()
{
}