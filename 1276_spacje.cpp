/**
	@name:     1276_spacje
	@author:   Marek Jenda
	@revision: 1.0
	@date:     23.12.2013
	@info:     pl.spoj.com/problems/JSPACE/
**/


#include <iostream>
#include <cstdlib>
#include <cstdio>


void spacje(char* napis);

int main(void)
{
	char napis[10001];
	while (std::cin.getline(napis, 10000)) {
		spacje(napis);
		std::cout << napis <<std::endl;
	}
	return 0;
	
}


void spacje(char* napis) {
	int i, j;
	unsigned char duzaLitera = 0;

	for(i = 0, j = 0; napis[i] != '\0'; i++) {
		if(napis[i] !=  ' ') {
			if((int)napis[i] > 97)
				napis[j++] = napis[i] - duzaLitera*32; 
			else
				napis[j++] = napis[i]; 
			duzaLitera = 0;
		}
		else duzaLitera = 1;
	}
	napis[j] = '\0';

	return;
}