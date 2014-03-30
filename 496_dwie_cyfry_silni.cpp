/**
	@name:     496_dwie_cyfry_silni
	@author:   Marek Jenda
	@revision: 1.0
	@date:     23.12.2013
	@info:     pl.spoj.com/problems/FCTRL3/
**/


#include <iostream>
#include <cstdlib>


typedef unsigned long long ull;

struct dwie_cyfry {
	unsigned char dziesiatki;
	unsigned char jednosci  ; 
} helperTab[10] = 
	{
		{0, 1}, // 0!
		{0, 1}, // 1!
		{0, 2}, // 2!
		{0, 6}, // 3!
		{2, 4}, // 4!
		{2, 0}, // 5!
		{2, 0}, // 6!
		{4, 0}, // 7!
		{2, 0}, // 8!
		{8, 0}  // 9!
	};

dwie_cyfry dwieCyfrySilni(ull n);

int main(void)
{
	int i;
	ull n;
	dwie_cyfry res;

	scanf("%d", &i);
	while(i--) {
		scanf("%llu", &n);
		res = dwieCyfrySilni(n);
		printf("%d %d\n", res.dziesiatki, res.jednosci);
	}
	return 0;
}

dwie_cyfry dwieCyfrySilni(ull n) {
	if(n < 10) 
		return helperTab[n];
	else {
		dwie_cyfry a = {0, 0};
		return a;
	}
}