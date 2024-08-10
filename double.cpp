#include <iostream>

int main() {
    double a = 7.564123, b = 9.6523147562;
    double add, sub, mul, div;

    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;

    std::cout << "add is " << add << std::endl;
    std::cout << "sub is " << sub << std::endl;
    std::cout << "mul is " << mul << std::endl;
    std::cout << "div is " << div << std::endl;

    return 0;
}
