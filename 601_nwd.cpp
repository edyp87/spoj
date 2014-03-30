/**
	@name:     601_nwd
	@author:   Marek Jenda
	@revision: 1.0
	@date:     23.12.2013
	@info:     pl.spoj.com/problems/PP0501A/
**/


#include <iostream>
#include <cstdlib>
#include <cstdio>

int euklides(int m, int n);

int main(void)
{
	int n;
	int a, b;

	std::cin >> n;
	while(n--) {
		std::cin  >> a >> b;
		std::cout << euklides(a, b) << std::endl;
	}
	
}

int euklides(int m, int n)
{
    while(1)
    {
        if(m == 0) return n;
        if(n == 0) return m;
        if(m > n) m = m % n;
        else n = n % m;
    }
}
