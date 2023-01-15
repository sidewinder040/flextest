#include <iostream>
#include "testblock.h"

using namespace std;

int main() {
    cout << "Hello" << endl;
    // Create a testblock
    testblock blk;
    blk.Hight = 40.0f;
    blk.Width = 40.0f;
    blk.Weight = 700;
    blk.Lenght = 180;
    cout << "Block Dims: 40x40x180" << endl;
    cout << "Weight: 700g" << endl;
    cout << "The Density of the block is: " << blk.GetDensity() << endl;
    return 0;
}