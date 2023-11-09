#include <iostream>

int findLCM(int num1, int num2) {
    int maxNum = (num1 > num2) ? num1 : num2;

    while (true) {
        if (maxNum % num1 == 0 && maxNum % num2 == 0) {
            return maxNum;
        }
        maxNum++;
    }
}

int main() {
    int num1, num2;
    
    // Taking input from user
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    int result = findLCM(num1, num2);

    std::cout << "The LCM of " << num1 << " and " << num2 << " is: " << result << std::endl;

    return 0;
}

