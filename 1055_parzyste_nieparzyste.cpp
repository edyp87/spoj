/**
	@name:     1055_parzyste_nieparzyste
	@author:   Marek Jenda
	@revision: 1.0
	@date:     23.12.2013
	@info:     pl.spoj.com/problems/PP0602A/
**/

struct verySimpleList {
	int liczba;
	verySimpleList *next;
};

#include <iostream>
#include <cstdlib>
#include <cstdio>



int main(void)
{
	
	verySimpleList* actOdd   = new verySimpleList;
	verySimpleList* headOdd  = actOdd;
	verySimpleList* actEven  = new verySimpleList;
	verySimpleList* headEven = actEven;
	
	int t, n, liczba;

	std::cin >> t;
	while(t--) {
		actEven = headEven;
		actOdd = headOdd;
		std::cin >> n;
		for(int j = 1; j <= n; j++) {
			std::cin >> liczba;
			if(j & 1) {
				actOdd->next = new verySimpleList;
				actOdd->next->liczba = liczba;
				actOdd->next->next = NULL;
				actOdd = actOdd->next;
			} else {
				actEven->next = new verySimpleList;
				actEven->next->liczba = liczba;
				actEven->next->next = NULL;
				actEven = actEven->next;
			}
		}
		
		actEven = headEven->next;
		actOdd  = headOdd->next;
		while(true) {
			if(actEven == NULL) break;
			std::cout << actEven->liczba << " ";
			verySimpleList* next = actEven->next;
			delete actEven;
			actEven = next;
		}

		while(true) {
			if(actOdd == NULL) break;
			std::cout << actOdd->liczba << " ";
			verySimpleList* next = actOdd->next;
			delete actOdd;
			actOdd = next;
		}
		std::cout << std::endl;

	}
	
	
	return 0;
	
}

