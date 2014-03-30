/**
	@name:     978_stos
	@author:   Marek Jenda
	@revision: 1.0
	@date:     23.12.2013
	@info:     pl.spoj.com/problems/STOS/
**/


#include <iostream>
#include <cstdlib>
#include <cstdio>



int main(void)
{
	int stos[10];
	int wsk = 0;
	char znak;
	int liczba;

	while(std::cin >> znak ) {
		if(znak == '+') {
			std::cin >> liczba;
			if(wsk > 9) 
				printf(":(\n");
			else {
				printf(":)\n");
				stos[wsk++] = liczba;
			}
		} else if(znak == '-' && wsk > 0) {
			printf("%d\n", stos[--wsk]); 
		} else 
			printf(":(\n");
	}

	
}
