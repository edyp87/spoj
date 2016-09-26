#include <iostream>
#include <vector>


int main()
{
    int n;
    std::cin >> n;

    long long bestTour = 0, currentTour = 0;
    while (n--)
    {
        long long city = 0;
        std::cin >> city;

        currentTour = std::max(currentTour + city, 0ll);
        bestTour    = std::max(bestTour, currentTour);
    }

    std::cout << bestTour << std::endl;
}

