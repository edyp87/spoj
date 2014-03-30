/**
	@name:     522_przedszkolanka
	@author:   Marek Jenda
	@revision: 1.0
	@date:     26.12.2013
	@info:     pl.spoj.com/problems/PRZEDSZK/
**/


#include <iostream>

using namespace std;

int euklides(int m, int n);

int main(void) {
	int n, g1, g2;

	cin >> n;
	while(n--) {
		cin >> g1 >> g2;
		cout << g1 * g2 / euklides(g1, g2);
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
