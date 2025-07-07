#include <iostream>


int main() {

    // Sequencial Control Example
    std::cout << "Control: Sequential " << std::endl;
    std::cout << "Starting program..." << std::endl;
    int a = 5, b = 10;
    int sum = a + b;
    std::cout << "Sum: " << sum << std::endl << std::endl;


    // Selection control: if Statement
    std::cout << "Control: if statement " << std::endl;
    int x = 10;
    if (x > 5) {
        std::cout << "x is greater than 5" << std::endl;
    }
    std::cout<<std::endl;

    // Selection control: if-else Statement
    std::cout << "Control: if-else statement " << std::endl;
    x = 3;
    if (x > 5) {
        std::cout << "x is greater than 5" << std::endl;
    } else {
        std::cout << "x is 5 or less" << std::endl;
    }

    std::cout<<std::endl;

    // Selection control: else-if Ladder

    std::cout << "Control: else-if ladder " << std::endl;
    int score = 85;
    if (score >= 90) {
        std::cout << "Grade A" << std::endl;
    } else if (score >= 80) {
        std::cout << "Grade B" << std::endl;
    } else if (score >= 70) {
        std::cout << "Grade C" << std::endl;
    } else {
        std::cout << "Grade F" << std::endl;
    }

    std::cout<<std::endl;
    return 0;
}