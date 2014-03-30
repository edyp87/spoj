/**
	@name:     803_dwumiany
	@author:   Marek Jenda
	@revision: 1.0
	@date:     23.12.2013
	@info:     pl.spoj.com/problems/BINOMS/
**/


#include <iostream>
#include <cstdlib>
#include <cstdio>

double binoms(unsigned int n, unsigned int k);

int main(void)
{
	unsigned int l;
	unsigned int n, k;
	scanf("%d", &l);
	for(int i = 0; i < l; i++) {
		scanf("%d %d", &n, &k);
		printf("%.0lf\n", binoms(n, k));
	}
	getchar(); getchar();
	return 0;
}

// en.wikipedia.org/wiki/Binomial_coefficient#Multiplicative_formula
double binoms(unsigned int n, unsigned int k) {
	long double rozw = 1;       
	
	unsigned int diff = n - k;
	if (k > diff) k = diff;

	for(unsigned int i = 0; i < k; i++) {
		rozw = rozw * (n - i) / (i+1);
	printf("%.0lf\n", rozw);
	}
	return rozw; 
}