// ЛР08. Табулювання функції двох змінних
// Паньчишин Ігор, КІ-21 (F7), варіант 14
// C++17

#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    constexpr double X_MIN = -1.0;
    constexpr double X_MAX = 1.0;
    constexpr double Y_MIN = -1.0;
    constexpr double Y_MAX = 1.0;
    constexpr double STEP = 0.5;
    constexpr int POINTS = 5;

    std::cout << std::fixed << std::setprecision(4);

    std::cout << "x/y";
    for (int j = 0; j < POINTS; ++j) {
        const double y = Y_MIN + j * STEP;
        std::cout << std::setw(12) << y;
    }
    std::cout << '\n';

    for (int i = 0; i < POINTS; ++i) {
        const double x = X_MIN + i * STEP;
        std::cout << std::setw(4) << x;

        for (int j = 0; j < POINTS; ++j) {
            const double y = Y_MIN + j * STEP;
            const double z = std::fabs(x) + std::fabs(y);
            std::cout << std::setw(12) << z;
        }
        std::cout << '\n';
    }

    return 0;
}
