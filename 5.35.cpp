#include <iostream>
#include <limits>

unsigned long long int fibonacci(unsigned int n) {
    unsigned long long int a = 0, b = 1, result = 0;

    if (n == 0) {
        return a;
    }

    for (unsigned int i = 2; i <= n; ++i) {
        result = a + b;
        a = b;
        b = result;
    }

    return b;
}

int main() {
    unsigned int n;
    std::cout << "叫块 n : ";
    std::cin >> n;

    std::cout << "材 " << n << "  Fibonacci 计琌: " << fibonacci(n) << std::endl;

    unsigned int maxN = 0;
    unsigned long long int maxFibonacci = 0;

    while (fibonacci(maxN) <= std::numeric_limits<unsigned long long int>::max() / 2) {
        maxFibonacci = fibonacci(maxN);
        ++maxN;
    }

    std::cout << "╰参程 Fibonacci 计琌: " << maxFibonacci << std::endl;

    return 0;
}

