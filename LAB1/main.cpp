#include <iostream>
#include "include/lab1.h" 

int main() {
    std::string number;
    long result;
    std::cin >> number;

    result = elimenate_unset_bits(number);

    std::cout << "Результат: " << result << std::endl;
}