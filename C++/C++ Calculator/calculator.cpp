// Include the iostream library for input and output operations.
#include <iostream>
// Include the string library for using string objects.
#include <string>
// Include the sstream library for string stream operations, useful for parsing input.
#include <sstream>
// Include the limits library, though not directly used in this version, it's good for numeric limits.
#include <limits>

// Function to perform the calculation based on two numbers and an operator.
void calculate(double num1, char op, double num2) {
    // Use a switch statement to handle different arithmetic operations.
    switch (op) {
        // Case for addition.
        case '+':
            // Print the result of addition.
            std::cout << "Result: " << num1 + num2 << std::endl;
            // Exit the switch statement.
            break;
        // Case for subtraction.
        case '-':
            // Print the result of subtraction.
            std::cout << "Result: " << num1 - num2 << std::endl;
            // Exit the switch statement.
            break;
        // Case for multiplication.
        case '*':
            // Print the result of multiplication.
            std::cout << "Result: " << num1 * num2 << std::endl;
            // Exit the switch statement.
            break;
        // Case for division.
        case '/':
            // Check if the second number (divisor) is not zero to prevent division by zero.
            if (num2 != 0) {
                // Print the result of division.
                std::cout << "Result: " << num1 / num2 << std::endl;
            } else {
                // Print an error message if division by zero is attempted.
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            }
            // Exit the switch statement.
            break;
        // Default case for any invalid operator.
        default:
            // Print an error message for an invalid operator.
            std::cout << "Error: Invalid operator. Please use +, -, *, or /." << std::endl;
            // Exit the switch statement.
            break;
    }
}

// The main function where the program execution begins.
int main() {
    // Declare a string variable to store user input lines.
    std::string line;
    // Print a welcome message for the calculator.
    std::cout << "C++ Command-Line Calculator" << std::endl;
    // Instruct the user on how to use the calculator and how to exit.
    std::cout << "Enter an expression (e.g., 5 + 3), or 'quit' to exit." << std::endl;

    // Start an infinite loop to allow continuous calculations.
    while (true) {
        // Print a prompt to indicate readiness for input.
        std::cout << "> ";
        // Read an entire line of input from the user.
        std::getline(std::cin, line);

        // Check if the user wants to quit or exit the calculator.
        if (line == "quit" || line == "exit") {
            // Break out of the infinite loop if 'quit' or 'exit' is entered.
            break;
        }

        // Create a stringstream object to parse the input line.
        std::stringstream ss(line);
        // Declare variables to store the two numbers and the operator.
        double num1, num2;
        char op;

        // Attempt to extract two doubles and a char from the stringstream.
        // If the extraction fails, it means the input format is incorrect.
        if (!(ss >> num1 >> op >> num2)) {
            // Print an error message for invalid input format.
            std::cout << "Error: Invalid input format. Please enter two numbers and an operator separated by spaces." << std::endl;
            // Continue to the next iteration of the loop to ask for new input.
            continue;
        }
        
        // Declare a character to check for any remaining input after the expected format.
        char remaining;
        // If there's any character left in the stringstream after parsing num1, op, num2,
        // it means there's extra unexpected input.
        if (ss >> remaining) {
            // Print an error message indicating too much input.
            std::cout << "Error: Invalid input format. Please enter only two numbers and an operator." << std::endl;
            // Continue to the next iteration of the loop.
            continue;
        }

        // Call the calculate function with the parsed numbers and operator.
        calculate(num1, op, num2);
    }

    // Print a goodbye message when the calculator exits.
    std::cout << "Exiting calculator. Goodbye!" << std::endl;
    // Return 0 to indicate successful program execution.
    return 0;
}