// ЛР06. Циклічно-розгалужені алгоритми
// Паньчишин Ігор, КІ-21 (F7), варіант 14
// C++17

#include <iostream>

int main() {
    constexpr int L = -10;
    constexpr int H = 20;
    constexpr int MIN_N = 1;
    constexpr int MAX_N = 30;
    constexpr int MIN_T = -100;
    constexpr int MAX_T = 100;

    int n = 0;
    if (!(std::cin >> n) || n < MIN_N || n > MAX_N) {
        std::cout << "Error:\n";
        return 1;
    }

    int below = 0;
    int inside = 0;
    int above = 0;

    for (int i = 0; i < n; ++i) {
        int t = 0;

        if (!(std::cin >> t) || t < MIN_T || t > MAX_T) {
            std::cout << "Error:\n";
            return 1;
        }

        if (t < L) {
            ++below;
        } else if (t <= H) {
            ++inside;
        } else {
            ++above;
        }
    }

    std::cout << "below / inside / above = "
              << below << " / " << inside << " / " << above << '\n';

    return 0;
}
