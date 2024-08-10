#include <iostream>
using namespace std;

int main() {
    int decimalNumber;
    int binaryNumber[32]; // Array to store binary number, assuming 32-bit integer
    
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;
    
    int i = 0;
    int tempNumber = decimalNumber;
    while (tempNumber > 0) {
        binaryNumber[i] = tempNumber % 2;
        tempNumber = tempNumber / 2;
        i++;
    }
    
    // Printing binary number in reverse order
    cout << "Binary representation of " << decimalNumber << " is: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binaryNumber[j];
    }
    cout << endl;
    
return 0;
}