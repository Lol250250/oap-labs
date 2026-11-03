#include <iomanip>
#include <iostream>

int main() {
    double amountUAH, usdRate, eurRate;

    std::cout << "Enter amount in UAH, USD rate, EUR rate: ";
    std::cin >> amountUAH >> usdRate >> eurRate;

    const double amountUSD = amountUAH / usdRate;
    const double amountEUR = amountUAH / eurRate;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Amount in UAH = " << amountUAH << '\n';
    std::cout << "USD rate = " << usdRate << '\n';
    std::cout << "EUR rate = " << eurRate << '\n';
    std::cout << "Equivalent in USD = " << amountUSD << '\n';
    std::cout << "Equivalent in EUR = " << amountEUR << '\n';

    return 0;
}
