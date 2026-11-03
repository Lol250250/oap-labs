#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double x, y, z;

    std::cout << "Enter x, y, z: ";
    std::cin >> x >> y >> z;

    // Variant 14: s = e^x * (x - y)^2 / (1 + z^2)
    const double difference = x - y;
    const double numerator = std::exp(x) * difference * difference;
    const double denominator = 1.0 + z * z;
    const double s = numerator / denominator;

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';
    std::cout << "z = " << z << '\n';
    std::cout << "s = " << s << '\n';

    return 0;
}
