#include <iostream>

int power(int base, int exponent) {
	
    if (exponent == 1) {
        return base;
    } else {
        
        return base * power(base, exponent - 1);
    }
}

int main() {
    
    int base, exponent;
    std::cout << "請輸入基數(base)：";
    std::cin >> base;
    std::cout << "請輸入指數(exponent)：";
    std::cin >> exponent;

    int result = power(base, exponent);

    std::cout << base << "^" << exponent << " = " << result << std::endl;

    return 0;
}

