#include "testblock.h"

float testblock::GetDensity() {
    // double mmCubed = (Width * Hight * Lenght); // cubed centimeters
    return  (Weight / (Width * Hight * Lenght)) * 1000000; // m cubed per Kilogram 
}

double testblock::GetAreaStrength() {
    return 10.0;
}
    
void testblock::SetBreakingStrength(float breakingStrength) {
    BreakingStrength = breakingStrength;
    // TODO: Do FBS Formula
}

testblock::testblock(/* args */)
{
}

testblock::~testblock()
{
}