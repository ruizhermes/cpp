#include <iostream>
#include <string>


using namespace std;

// 1. Basic Function
int add(int a, int b) {
    return a + b;
}

// 2. Declaration and Definition
int multiply(int, int); // Declaration
int multiply(int a, int b) { // Definition
    return a * b;
}

// 3a. Pass by Value
void modifyValue(int x) {
    x = 100;
    cout << "Inside modifyValue: " << x << endl;
}

// 3b. Pass by Reference
void modifyReference(int& x) {
    x = 200;
    cout << "Inside modifyReference: " << x << endl;
}

// 3c. Pass by Pointer
void modifyPointer(int* x) {
    *x = 300;
    cout << "Inside modifyPointer: " << *x << endl;
}

// 4. Default Arguments
void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

// 5. Function Overloading
int subtract(int a, int b) {
    return a - b;
}
double subtract(double a, double b) {
    return a - b;
}

// 6. Inline Function
inline int square(int x) {
    return x * x;
}

// 7. Recursive Function
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// 8. Lambda Function
void lambdaDemo() {
    auto multiply = [](int a, int b) { return a * b; };
    cout << "Lambda Multiply: " << multiply(3, 4) << endl;
}

// 9. Function Pointers
int divide(int a, int b) {
    return a / b;
}
void executeOperation(int x, int y, int (*operation)(int, int)) {
    cout << "Result: " << operation(x, y) << endl;
}

// 10. Const Member Function
class MyClass {
public:
    int getValue() const {
        return value;
    }
private:
    int value = 10;
};

// 11. Function Template
template <typename T>
T maxValue(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // 1. Basic Function
    cout << "Add: " << add(5, 3) << endl;

    // 2. Declaration and Definition
    cout << "Multiply: " << multiply(4, 5) << endl;

    // 3. Function Parameters
    int a = 10;
    modifyValue(a);
    cout << "After modifyValue: " << a << endl;

    modifyReference(a);
    cout << "After modifyReference: " << a << endl;

    modifyPointer(&a);
    cout << "After modifyPointer: " << a << endl;

    // 4. Default Arguments
    greet();
    greet("Alice");

    // 5. Function Overloading
    cout << "Subtract (int): " << subtract(10, 3) << endl;
    cout << "Subtract (double): " << subtract(5.5, 2.2) << endl;

    // 6. Inline Function
    cout << "Square: " << square(6) << endl;

    // 7. Recursive Function
    cout << "Factorial: " << factorial(5) << endl;

    // 8. Lambda Function
    lambdaDemo();

    // 9. Function Pointers
    executeOperation(10, 2, divide);

    // 10. Const Member Function
    MyClass obj;
    cout << "Const Function Value: " << obj.getValue() << endl;

    // 11. Function Template
    cout << "Max (int): " << maxValue(4, 7) << endl;
    cout << "Max (double): " << maxValue(3.14, 2.72) << endl;

    return 0;
}
