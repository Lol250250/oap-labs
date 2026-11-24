// ЛР07. Обчислення скінченного добутку
// Паньчишин Ігор, КІ-21 (F7), варіант 14
// C++17

#include <iomanip>
#include <iostream>

int main() {
    constexpr int kA = 3;
    constexpr int kB = 3;
    constexpr int kC = 2;

    int n = 0;
    if (!(std::cin >> n) || n < 1 || n > 20) {
        std::cout << "Error:\n";
        return 1;
    }

    double product = 1.0;

    for (int i = 1; i <= n; ++i) {
        const double term =
            static_cast<double>(kA * i + kB) / (i + kC);
        product *= term;
    }

    std::cout << std::fixed << std::setprecision(6)
              << product << '\n';

    return 0;
}
