/**
	@name:     747_nww2
	@author:   Marek Jenda
	@revision: 1.0
	@date:     26.12.2013
	@info:     pl.spoj.com/problems/NWW/
**/


#include <iostream>
#include <vector>

using namespace std;

typedef unsigned long long int ulli;

ulli euklides(ulli m, ulli n);
ulli nww(vector<ulli> dane);

int main(void) {
	ulli n, m, liczba;

	cin >> n;
	while(n--) {
		cin >> m;
		vector<ulli> dane;
		while(m--) {
			cin >> liczba;
			dane.push_back(liczba);
		}
		cout << nww(dane) << endl;
	}
}


ulli euklides(ulli m, ulli n)
{
    while(1)
    {
        if(m == 0) return n;
        if(n == 0) return m;
        if(m > n) m = m % n;
        else n = n % m;
    }
}

ulli nww(vector<ulli> dane) {
	ulli m, n = dane[0];
	for(ulli i = 1; i < dane.size(); i++) {
		m = dane[i];
		n = n * m / euklides(n, m);
	}
	return n;
}