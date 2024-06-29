#include <iostream>

void displayMenu() {
    // Change made in branch2
    std::cout << "Simple Calculator (Branch 2)" << std::endl;
    std::cout << "1. Add" << std::endl;
    std::cout << "2. Subtract" << std::endl;
    std::cout << "3. Multiply" << std::endl;
    std::cout << "4. Divide" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Choose an option: ";
}

int main() {
    int choice;
    double num1, num2;

    while (true) {
        displayMenu();
        std::cin >> choice;

        if (choice == 5) {
            break;
        }

        std::cout << "Enter first number: ";
        std::cin >> num1;
        std::cout << "Enter second number: ";
        std::cin >> num2;

        switch (choice) {
            case 1:
                std::cout << "Result: " << num1 + num2 << std::endl;
                break;
            case 2:
                std::cout << "Result: " << num1 - num2 << std::endl;
                break;
            case 3:
                std::cout << "Result: " << num1 * num2 << std::endl;
                break;
            case 4:
                if (num2 != 0) {
                    std::cout << "Result: " << num1 / num2 << std::endl;
                } else {
                    std::cout << "Error: Division by zero" << std::endl;
                }
                break;
            default:
                std::cout << "Invalid choice" << std::endl;
                break;
        }

        std::cout << std::endl;
    }

    return 0;
}
