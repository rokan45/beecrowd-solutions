#include <iostream>
#include <cmath> // For using std::abs

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    // Calculate the greatest value using the formula
    int maior = (a + b + std::abs(a - b)) / 2;

    // Print the result
    std::cout << maior << " eh o maior" << std::endl;

    return 0;
}
