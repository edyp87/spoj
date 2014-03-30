/**
	@name:     549_proste_dodawanie
	@author:   Marek Jenda
	@revision: 1.0
	@date:     26.12.2013
	@info:     pl.spoj.com/problems/RNO_DOD/
**/


#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.141592654;

double poleKola(double r, double d);

int main(void) {
	double r, d;

	cin >> r >> d;
	cout << poleKola(r, d) << endl;

	cin.get(); cin.get();
}

double poleKola(double r, double d) {
	double r_kolo = sqrt(r*r - (d/2)*(d/2));
	cout.setf( std::ios::fixed, std:: ios::floatfield );  
	cout.precision(2);
	return pi * r_kolo * r_kolo;
}