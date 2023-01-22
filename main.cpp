#include <iostream>
#include <iomanip>
#include "testblock.h"

using namespace std;

int main() {
    cout << "Flextest" << endl;
    // Create a testblock
    testblock blk;

    // Get user parameter inputs
    float input = 0;
    cout << "Height: ";
    cin >> input;
    blk.Height = input;

    input = 0;
    cout << "Width: ";
    cin >> input;
    blk.Width = input;

    input = 0;
    cout << "Length: ";
    cin >> input;
    blk.Lenght = input;

    int weight = 0;
    cout << "Weight: ";
    cin >> weight;
    blk.Weight = weight;
    
    float breakingStrength = 0;
    cout << "Breaking Strength (kN): ";
    cin >> breakingStrength;
    blk.SetBreakingStrength(breakingStrength);

    // Output the results
    cout << "\nParameters Entered:" << endl;
    cout << "Block Dims:\t"
         << "W = " << setprecision(4) << blk.Width << " mm\t"
         << "H = " << setprecision(4) << blk.Height << "mm\t" 
         << "L = " << setprecision(5) << blk.Lenght << "mm" << endl;
    cout << "Weight:\t\t" << blk.Weight << "g" << endl;

    cout << "\nResults..." << endl;
    cout << "Block Density:\t\t" << setprecision(5) 
        << blk.GetDensity() 
        << " m3/kg" << endl;
    cout << "The Force is:\t\t" << setprecision(3) 
        << breakingStrength 
        << " kN" << endl; 
    cout << "Force per area is:\t"
        << setprecision(4)
        << blk.GetAreaStrength()  
        << "N/mm2" << endl;
    return 0;
}