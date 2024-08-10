#include <iostream>

int main() {
    long a = 7564123, b = 9652362;
    long add, sub, mul, div;

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
