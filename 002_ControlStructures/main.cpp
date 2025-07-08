#include <iostream>
/*
    Control Structure Examples:
        1. Sequential
        2. if statement
        3. if-else statement
        4. else-if ladder
        5. switch statement

    Repetition Control Structure (Loops):
        6. for loop
        7. while loop
        8. do-while loop
*/

int main() {


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

    // Selection Control: switch statement

    std::cout << "Control: switch statement " << std::endl;
    int day = 3;
    switch (day) {
        case 1:
            std::cout << "Monday" << std::endl;
            break;
        case 2:
            std::cout << "Tuesday" << std::endl;
            break;
        case 3:
            std::cout << "Wednesday" << std::endl;
            break;
        default:
            std::cout << "Other day" << std::endl;
            break;
    }
    std::cout<<std::endl;


    // Repetition Control: for loop
    std::cout << "Repetition cotrol: for loop " << std::endl;
    for (int i = 1; i <= 5; i++) {
        std::cout << "Iteration " << i << std::endl;
    }
    std::cout<<std::endl;

    // Repetition Control: while loop
    std::cout << "Repetition cotrol: while loop " << std::endl;
    int i = 1;
    while (i <= 5) {
        std::cout << "Iteration " << i << std::endl;
        i++;
    }
    std::cout<<std::endl;


    // Repetition Control: while loop
    std::cout << "Repetition cotrol: do-while loop " << std::endl;
    i = 1;
    do {
        std::cout << "Iteration " << i << std::endl;
        i++;
    } while (i <= 5);
    std::cout<<std::endl;


    return 0;
}