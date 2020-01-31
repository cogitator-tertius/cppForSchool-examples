#include <iostream>
using namespace std;

int main(){

int input;
bool isPositive = true;

cout << "Enter a number to see if it is positive or negative" << endl;
cin >> input;

isPositive = input < 0 ? false : true;

if (isPositive == true){
    cout << "The number is positive, or zero." << endl;
}else
{
    cout << "The number is negative." << endl;
}

return 0;
}