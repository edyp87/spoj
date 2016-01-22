#include <iostream>

int main()
{
    int numberOfTrials = 0;
    std::cin >> numberOfTrials;

    while (numberOfTrials--)
    {
        int maxNumber = 0, divisor = 0, nonDivisor = 0;
        std::cin >> maxNumber >> divisor >> nonDivisor;
        for (int i = 1; i < maxNumber; ++i)
        {
            if (i % divisor == 0 && i % nonDivisor != 0)
            {
                std::cout << i << " ";
            }
        }
        std::cout << std::endl;
    }
}
