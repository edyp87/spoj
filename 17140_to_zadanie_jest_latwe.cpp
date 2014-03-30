/**
	@name:     17140_to_zadanie_jest_latwe
	@author:   Marek Jenda
	@revision: 1.0
	@date:     26.12.2013
	@info:     pl.spoj.com/problems/AL_13_10/
**/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool latwa_funkcja(string slowo, string wzorzec);

int main(void) {
	int n;
	//char* slowo = new char[10^4];
	//char* wzorzec = new char[10^4];
	string wzorzec, slowo;
	cin >> n;
	while(n--) {
		cin >> slowo;
		cin  >> wzorzec;
		if(latwa_funkcja(slowo, wzorzec))
			cout << "Tak" << endl;
		else
			cout << "Nie" << endl;
	}
}


bool latwa_funkcja(string slowo, string wzorzec) {

	for(int i = 0, j = 0;;i++) {
		if(wzorzec[j] == '\0') return true;
		if(slowo[i]   == '\0') return false;

		if(slowo[i] == wzorzec[j]) j++;
	}
}