/**
	@name:     977_tablica
	@author:   Marek Jenda
	@revision: 1.0
	@date:     23.12.2013
	@info:     pl.spoj.com/problems/TABLICA/
**/


#include <iostream>
#include <cstdlib>
#include <cstdio>

struct verySimpleStack {
	int liczba;
	verySimpleStack *prev;
};

int main(void)
{
	int liczba;
	verySimpleStack* act = NULL;

	while(std::cin >> liczba) {
		verySimpleStack* stack = new verySimpleStack;
		stack->liczba = liczba;
		stack->prev = act;
		act = stack;
	}

	while(act != NULL) {
		std::cout << act->liczba << " ";
		act = act->prev;
	}
	
}
