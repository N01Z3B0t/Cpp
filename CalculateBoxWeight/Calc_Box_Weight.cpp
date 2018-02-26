/**
 *  @author Ernie Reynoso
 *  @date 01/30/2017
 *  @file h00.cpp
 */
#include <iostream>
#include <string>
using namespace std;


/**
 * Describe the purpose of your program here.
 * @return 0 for success.
 */
//  ./h00
int run()
{
    /*
        Implementation comments.
        Describe the inputs, outputs, given values
        and calculations here.
    */
    
    cout << STUDENT << " - " << ASSIGNMENT << ": ";
    cout << "Cereal Box Calculator" << endl;
    cout << string(50, '-') << endl;
    
    // I - Input
    cout << "Enter ounces per box of cereal: ";
    double ouncesPerBox;
    cin >> ouncesPerBox;
    
    
    
    // P - Processing
    const double OUNCES_PER_TON = 35273.92;
    double weightInTons = ouncesPerBox/OUNCES_PER_TON;
    double boxesPerTon = 1.0/weightInTons;
    
    // O - Output
    cout << "Weight in metric tons, boxes per ton: ["
         << weightInTons << ", " << boxesPerTon << "]" << endl;
    
    return 0;
}