// Accepts Fahrenheit as input
// Convert and print to Centigrade

#include <iostream>
using namespace std;

int main()
{
    double farenheit;
    double centigrade;

    cout << "Enter temperature in degrees Farenheit: ";
    cin >> farenheit;

    centigrade = (farenheit - 32) / 1.8;

    cout << centigrade << " degrees Centigrade.";

    return 0;
}