#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double x;

    constexpr double A = 0.0;
    constexpr double B = 3.0;

    std::cout << "Enter x: ";
    if (!(std::cin >> x) || !std::isfinite(x)) {
        std::cerr << "Error: input must be a finite number.\n";
        return 1;
    }

    double y = 0.0;
    int branch = 0;

    if (x < A) {
        // f1(x) = |x - 1|
        branch = 1;
        y = std::fabs(x - 1.0);
    } else if (x <= B) {
        // f2(x) = x * sin(x)
        branch = 2;
        y = x * std::sin(x);
    } else {
        // f3(x) = lg(x), decimal logarithm.
        branch = 3;
        // This branch is reached only for x > B = 3, so x is positive.
        y = std::log10(x);
    }

    std::cout << std::fixed << std::setprecision(4)
              << "x = " << x << '\n'
              << "Branch = " << branch << '\n'
              << "y = " << y << '\n';

    return 0;
}
