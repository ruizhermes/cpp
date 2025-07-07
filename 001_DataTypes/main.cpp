#include <iostream>

int main() {
    // Integer types
    int a = 10;
    unsigned int b = 20;
    short c = -5;
    long d = 100000L;
    long long e = 10000000000LL;

    // Floating-point types
    float f = 3.14f;
    double g = 2.71828;
    long double h = 1.6180339887L;

    // Character and Boolean
    char i = 'X';
    bool j = true;

    // Output the values
    std::cout << "int: " << a << std::endl;
    std::cout << "unsigned int: " << b << std::endl;
    std::cout << "short: " << c << std::endl;
    std::cout << "long: " << d << std::endl;
    std::cout << "long long: " << e << std::endl;
    std::cout << "float: " << f << std::endl;
    std::cout << "double: " << g << std::endl;
    std::cout << "long double: " << h << std::endl;
    std::cout << "char: " << i << std::endl;
    std::cout << "bool: " << j << std::endl;

    return 0;
}