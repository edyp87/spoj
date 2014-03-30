/**
	@name:     499_czy_umiesz_potegowac
	@author:   Marek Jenda
	@revision: 1.0
	@date:     23.12.2013
	@info:     pl.spoj.com/problems/PA05_POT/
**/


#include <iostream>
#include <cstdlib>

typedef unsigned long long ull;

// FUNKCJA LICZACA (a^b) % c
ull modulo_exp(ull a, ull b, ull c);


int main(void)
{
	int n;
	ull a, b;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%llu %llu", &a, &b);
		printf("%llu\n", modulo_exp(a, b, 10));
	}
	return 0;
}


// Implementacja Binary Exponentiation
// opis (strona 7) : www.cs.zju.edu.cn/ds/upload/201209/20120926223412160.pdf
ull modulo_exp(ull a, ull b, ull c) {
	ull res = 1, base = a;
	while(b > 0) {
		if(b % 2 == 1) {
			res = (res * base) % c;
		}
		base = (base * base) % c;	
		b /= 2;
	}
	return res % c;
}
