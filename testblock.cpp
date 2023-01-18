#include "testblock.h"
#include <cmath>

float testblock::GetDensity() {
    // double mmCubed = (Width * Hight * Lenght); // cubed centimeters
    return  (Weight / (Width * Hight * Lenght)) * 1000000; // m cubed per Kilogram 
}

double testblock::GetAreaStrength() {
    return ForcePerArea;
}
    
void testblock::SetBreakingStrength(float breakingStrength) {
    BreakingStrength = breakingStrength;
    DoFormula();
}

float testblock::DoFormula() {
    ForcePerArea = 1000*((3* BreakingStrength * SPAN)/ (2.0 * Width * pow(Hight, 2)));
}

testblock::testblock(/* args */)
{
}

testblock::~testblock()
{
}