#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    int largestNumber;

    cout << "Enter 3 numbers to return the largest: ";
    cin >> a >> b >> c;

    largestNumber= (a > b && a > c)? a : (b > c)? b : c;

    cout << "The largest number is " << largestNumber << "." << endl;

    return 0;
}