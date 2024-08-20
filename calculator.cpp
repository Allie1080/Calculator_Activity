#include <iostream>

int operateExponent (int base, int exponent) {
    int result = base;

        for (int counter{1}; counter < exponent; counter++) {
            result *= base;
        }

    return result;
}

int main () {
    int integer1{};
    char operation{};
    int integer2{};
    int result{};

    std::cout << "^*/+- EMDAS CALCULATOR -+/*^"
              << "\n\n";

    std::cout << "Enter a simple two-term equation with each value separated with a space\n"
              << "Examples:\n"
              << "139 + 4\n"
              << "7 ^ 2\n\n"
              << ">> ";

    std::cin >> integer1;
    std::cin >> operation;
    std::cin >> integer2;

    std::cout << "\nYou have entered:\n"
              << integer1 << operation << integer2
              << "\n";

    switch (operation) {
        case '^':
            std::cout << "Exponent executed\n";
            result = operateExponent(integer1, integer2);
            break;

        case '*':
            std::cout << "Multiplication executed\n";
            result = integer1 * integer2;
            break;

        case '/':
            std::cout << "Division executed\n";
            result = integer1 / integer2;
            break;
       
        case '+':
            std::cout << "Addition executed\n";
            result = integer1 + integer2;
            break;

        case '-':
            std::cout << "Subtraction executed\n";
            result = integer1 - integer2;
            break;

        default:
            std::cout << "Operation: " << operation;
            result = 404;
            break;
        
    }

    std::cout << "Result: " << result << '\n';

    return 0;


}
 

