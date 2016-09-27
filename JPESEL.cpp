#include <iostream>
#include <cmath>

using Pesel = unsigned long long;



int getDigit(Pesel pesel, int digit)
{
    return (pesel / static_cast<Pesel>(pow(10, 11 - digit))) % 10;
}

bool checkPesel(Pesel pesel)
{
    int hash =
        getDigit(pesel, 1)  * 1+
        getDigit(pesel, 2)  * 3 +
        getDigit(pesel, 3)  * 7 +
        getDigit(pesel, 4)  * 9 +
        getDigit(pesel, 5)  * 1 +
        getDigit(pesel, 6)  * 3 +
        getDigit(pesel, 7)  * 7 +
        getDigit(pesel, 8)  * 9 +
        getDigit(pesel, 9)  * 1 +
        getDigit(pesel, 10) * 3 +
        getDigit(pesel, 11) * 1;

        return (hash % 10) == 0;
}

int main()
{
    int n;
    std::cin >> n;

    while (n--)
    {
        Pesel pesel;
        std::cin >> pesel;
        if (checkPesel(pesel))
        {
            std::cout << "D" << std::endl;
        }
        else
        {
            std::cout << "N" << std::endl;
        }
    }
}
