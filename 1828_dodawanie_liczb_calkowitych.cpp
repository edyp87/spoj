/**
	@name:     1828_dodawanie_liczb_calkowitych
	@author:   Marek Jenda
	@revision: 1.0
	@date:     23.12.2013
	@info:     pl.spoj.com/problems/KC001/
**/


#include <iostream>
#include <cstdlib>
#include <cstdio>



int main(void)
{
	int liczba, suma = 0;

	
	while(std::cin >> liczba) 
		suma += liczba;
	
	std::cout << suma;

	return 0;
	
}


