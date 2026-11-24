// ЛР02. Перший проєкт. Частина В. Варіант 14
// Паньчишин Ігор, КІ-21, 2026-11-03

#include <iostream>

int main() {
    int bytes = 0;

    std::cout << "Enter number of bytes: ";
    std::cin >> bytes;

    const int kilobytes = bytes / 1024;
    const int remaining_bytes = bytes % 1024;
    const int megabytes = bytes / (1024 * 1024);
    const int remaining_kilobytes = (bytes % (1024 * 1024)) / 1024;
    const int remaining_bytes_mb = bytes % 1024;

    std::cout << "Kilobytes: " << kilobytes
              << " KB " << remaining_bytes << " B\n";
    std::cout << "Megabytes: " << megabytes
              << " MB " << remaining_kilobytes << " KB "
              << remaining_bytes_mb << " B\n";

    return 0;
}
