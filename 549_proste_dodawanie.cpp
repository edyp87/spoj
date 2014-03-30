/**
	@name:     549_proste_dodawanie
	@author:   Marek Jenda
	@revision: 1.0
	@date:     26.12.2013
	@info:     pl.spoj.com/problems/RNO_DOD/
**/


#include <iostream>

using namespace std;

int main(void) {
	int n, m, suma, liczba;

	cin >> n;
	while(n--) {
		cin >> m;
		suma = 0;
		while(m--) {
			cin >> liczba;
			suma += liczba;
		}
		cout << suma;
	}
}
