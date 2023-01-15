#include "testblock.h"

float testblock::GetDensity() {
    return  (testblock::Hight * testblock::Width * testblock::Lenght) / Weight;
}

testblock::testblock(/* args */)
{
}

testblock::~testblock()
{
}