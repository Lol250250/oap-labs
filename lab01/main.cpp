// ЛР01. Налаштування середовища розробки. Варіант 14
// Паньчишин Ігор, КІ-21, 2026-11-03

#include <iostream>

int main() {
    std::cout << "Student: Ihor Panchyshyn\n";
    std::cout << "Group:   KI-21\n";
    std::cout << "Variant: 14\n";

#if defined(_MSC_VER)
    std::cout << "Compiler: MSVC " << _MSC_VER
              << ", standard " << _MSVC_LANG << '\n';
#elif defined(__clang__)
    std::cout << "Compiler: clang " << __clang_major__
              << ", standard " << __cplusplus << '\n';
#elif defined(__GNUC__)
    std::cout << "Compiler: g++ " << __GNUC__ << '.' << __GNUC_MINOR__
              << ", standard " << __cplusplus << '\n';
#endif

    return 0;
}
