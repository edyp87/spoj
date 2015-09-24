/**
	@name:     723_rol 
	@author:   Marek Jenda
	@revision: 1.0
	@date:     24.09.2015
	@info:     pl.spoj.com/problems/PTROL/
**/

#include <iostream>

const char space[2] = " ";

void shift(int n)
{
    int firstNumber = 0, nextNumber = 0;
    std::cin >> firstNumber;
    --n;

    while (n--)
    {
        std::cin  >> nextNumber;
        std::cout << nextNumber << space;
    }

    std::cout << firstNumber << std::endl;
}

void solve()
{
    int n = 0;
    std::cin >> n;
    
    shift(n);
}

int main()
{
    int t = 0;
    std::cin >> t;
    while (t--)
    {
        solve();
    }
}
