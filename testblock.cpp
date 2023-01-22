#include "testblock.h"
#include <cmath>

float testblock::GetDensity() {
    // double mmCubed = (Width * Height * Lenght); // cubed centimeters
    return  (Weight / (Width * Height * Lenght)) * 1000000; // m cubed per Kilogram 
}

double testblock::GetAreaStrength() {
    return ForcePerArea;
}
    
void testblock::SetBreakingStrength(float breakingStrength) {
    BreakingStrength = breakingStrength;
    DoFormula();
}

void testblock::DoFormula() {
    ForcePerArea = (3* (1000 * BreakingStrength) * SPAN)/ (2.0 * Width * pow(Height, 2));
}

testblock::testblock(/* args */)
{
}

testblock::~testblock()
{
}