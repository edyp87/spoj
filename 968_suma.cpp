/**
	@name:     968_suma
	@author:   Marek Jenda
	@revision: 1.0
	@date:     23.12.2013
	@info:     pl.spoj.com/problems/SUMA/
**/

#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(void)
{
	int liczba, suma = 0;
	while(cin >> liczba) {
		suma += liczba;
		cout << suma << endl;
	}
	
	return 0;
	
}

