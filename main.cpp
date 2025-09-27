#include <iostream>
#include <string>
#include "bracket.h"

int main() {
    std::string input;
    
    std::cout << "Введите строку из скобок: ";
    std::getline(std::cin, input);
    
    if (isValidParentheses(input)) {
        std::cout << "VALID" << std::endl;
    } else {
        std::cout << "INVALID" << std::endl;
    }

}
