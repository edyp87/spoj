/**
	@name:     1590_lider
	@author:   Marek Jenda
	@revision: 1.0
	@date:     27.12.2013
	@info:     pl.spoj.com/problems/LIDER/
**/



#include <iostream>
#include <cstdio>
	
using namespace std;

typedef long long int ulli;

ulli leader(ulli * tab, int size);

int main(void)
{
	int n, m;
	ulli liczba;

	scanf("%d", &n);
	while(n--) {
		scanf("%d", &m);
		ulli* tab = new ulli[m];
		for(int i = 0; i < m; i++) {
			scanf("%lld", &liczba);
			tab[i] = liczba;
		}
		cout << leader(tab, m) << endl;
		delete [] tab;
	}
}


ulli leader(ulli* tab, int size) {
	ulli leader = tab[0];
	int i,  counts  = 1;

	for(i = 1; i < size; i++) {
		if(counts == 0) {
			leader = tab[i];
			counts  = 1;
		} else if(tab[i] == leader) {
			counts++;
		} else {
			counts--;
		}
	}
	

	if(counts == 0) {
		return -1;
	} else {
		for(counts = 0, i = 0; i < size; i++) 
			if(tab[i] == leader) counts++;
		
		if(counts > size/2) return leader;
		else return -1;
	}


}