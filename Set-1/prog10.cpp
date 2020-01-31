#include <iostream>
using namespace std;

int main(){
    int input;

    cout << "Enter a number to see if it is even or odd: ";
    cin >> input;

    (input%2 == 0)? cout << "Number is even." : cout << "Number is odd";

    return 0;
}