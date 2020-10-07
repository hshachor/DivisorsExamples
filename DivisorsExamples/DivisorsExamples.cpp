#include <iostream>

int main()
{
    std::cout << "Enter a number!\n";
    unsigned int num, divisor = 2;
    std::cin >> num;
    std::cout << num << " = ";
    while (num > 1) {
        if (num % divisor == 0) {
            num /= divisor;
            std::cout << divisor << " * ";
        }
        else {
            divisor++;
        }
    }
}

