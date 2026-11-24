// ЛР02. Перший проєкт. Частина Б
// Паньчишин Ігор, КІ-21, варіант 14

#include <iostream>

int square(int n);

int main() {
    int first = 0;
    int second = 0;

    std::cout << "Enter two integers: ";
    std::cin >> first >> second;

    const int sum = first + second;

    std::cout << "Sum = " << sum << '\n';
    std::cout << "Square of sum = " << square(sum) << '\n';
    std::cout << "Average = " << static_cast<double>(sum) / 2 << '\n';

    return 0;
}

int square(int n) {
    return n * n;
}
