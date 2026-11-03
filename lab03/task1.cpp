#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double a, b, c;

    std::cout << "Enter triangle sides a, b, c: ";
    std::cin >> a >> b >> c;

    const double p = (a + b + c) / 2.0;
    const double area = std::sqrt(p * (p - a) * (p - b) * (p - c));
    const double r = area / p;
    const double R = (a * b * c) / (4.0 * area);
    const double h = (2.0 * area) / a;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nTriangle results\n";
    std::cout << "------------------------------\n";
    std::cout << std::left << std::setw(24) << "Semiperimeter p"
              << std::right << p << '\n';
    std::cout << std::left << std::setw(24) << "Area S"
              << std::right << area << '\n';
    std::cout << std::left << std::setw(24) << "Inradius r"
              << std::right << r << '\n';
    std::cout << std::left << std::setw(24) << "Circumradius R"
              << std::right << R << '\n';
    std::cout << std::left << std::setw(24) << "Height h to side a"
              << std::right << h << '\n';

    return 0;
}
