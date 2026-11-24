// ЛР05. Табулювання функції однієї змінної. Варіант 14
// Паньчишин Ігор, КІ-21

#include <iomanip>
#include <iostream>

int main() {
    constexpr double a = -2.0;
    constexpr double b = 2.0;
    constexpr double h = 0.5;
    constexpr int number_of_intervals = static_cast<int>((b - a) / h);

    std::cout << "i       x           y\n";
    std::cout << "---------------------------\n";

    for (int i = 0; i <= number_of_intervals; ++i) {
        const double x = a + i * h;
        const double denominator = x * x - 1.0;

        std::cout << std::fixed << std::setprecision(4);
        std::cout << i << "       " << std::setw(6) << x << "      ";

        if (denominator == 0.0) {
            std::cout << "undefined\n";
        } else {
            const double y = 1.0 / denominator;
            std::cout << std::setw(10) << y << '\n';
        }
    }

    return 0;
}
