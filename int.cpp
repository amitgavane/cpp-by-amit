#include <iostream>

int main() {
    int a = 2, b = 8;
    int add, sub, mul, div;

    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a % b;

    std::cout << "add is " << add << std::endl;
    std::cout << "sub is " << sub << std::endl;
    std::cout << "mul is " << mul << std::endl;
    std::cout << "div is " << div << std::endl;

    return 0;
}
