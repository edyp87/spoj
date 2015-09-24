/**
	@name:     769_EUCGAME
	@author:   Marek Jenda
	@revision: 1.0
	@date:     24.09.2015
	@info:     pl.spoj.com/problems/EUCGAME/
**/

#include <iostream>

int euclideanGame(int a, int b)
{
    while (a != b)
    {
        while (a > b)
        {
            a -= b;
        }
        while (b > a)
        {
            b -= a;
        }
    }
    return a + b;
}

int main()
{
    int t = 0;
    std::cin >> t;

    int a = 0, b = 0;
    while (t--)
    {
        std::cin >> a >> b;
        std::cout << euclideanGame(a, b) << std::endl;
    }
}
