/**
	@name:     606_tablice
	@author:   Marek Jenda
	@revision: 1.0
	@date:     23.12.2013
	@info:     pl.spoj.com/problems/PP0502B/
**/


#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

struct verySimpleStack {
	int liczba;
	verySimpleStack *prev;
};

int main(void)
{
	int liczba;
	verySimpleStack* act = NULL;

	int t, n;

	cin >> t;

	while(t--) {
		cin >> n;
		while(n--) {
			cin >> liczba;
			verySimpleStack* stack = new verySimpleStack;
			stack->liczba = liczba;
			stack->prev = act;
			act = stack;
		}

		while(act != NULL) {
			std::cout << act->liczba << " ";
			verySimpleStack* old = act;
			act = act->prev;
			delete old;
		}
		cout << endl;
	}
	
}
