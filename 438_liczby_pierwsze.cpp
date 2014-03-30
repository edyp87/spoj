/**
	@name:     438_liczby_pierwsze
	@author:   Marek Jenda
	@revision: 1.0
	@date:     22.12.2013
	@info:     pl.spoj.com/problems/PRIME_T/
	@add_info: community.topcoder.com/tc?module=Static&d1=tutorials&d2=primalityTesting
**/


#include <iostream>
#include <cstdlib>
#include <time.h>

typedef unsigned long long ulonglong;

// FUNKCJA LICZACA (a^b) % c
ulonglong modulo_exp(ulonglong a, ulonglong b, ulonglong c);
ulonglong modulo_mult(ulonglong a, ulonglong b, ulonglong n);
ulonglong random(ulonglong from, ulonglong to);
bool miller_rabin(ulonglong p,int iteration);

int main(void)
{
	int n;
	ulonglong b;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%llu", &b);
		if(miller_rabin(b, 10)) printf("TAK\n");
		else printf("NIE\n");
	}
	std::cin.get();
	std::cin.get();
	return 0;
}


// Implementacja Binary Exponentiation
// opis (strona 7) : www.cs.zju.edu.cn/ds/upload/201209/20120926223412160.pdf
ulonglong modulo_exp(ulonglong a, ulonglong b, ulonglong c) {
	ulonglong res = 1, base = a;
	while(b > 0) {
		if(b % 2 == 1) {
			res = (res * base) % c;
		}
		base = (base * base) % c;	
		b /= 2;
	}
	return res % c;
}

ulonglong modulo_mult(ulonglong a, ulonglong b, ulonglong n)
{
  ulonglong m,w;

  w = 0;
  for(m = 1; m; m <<= 1)
  {
    if(b & m) w = (w + a) % n;
    a = (a << 1) % n;
  }
  return w;
}


ulonglong mulmod(ulonglong a,ulonglong b,ulonglong c){
    ulonglong x = 0,y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}

bool miller_rabin(ulonglong p,int iteration) {
    if(p < 2)				 return false;
    if(p != 2 && p % 2 == 0) return false;

    long long s = p-1;

    while (s % 2 == 0)
        s /= 2;

    for(int i = 0; i < iteration; i++) {
        ulonglong a = rand() % (p-1) + 1, temp = s;
        ulonglong mod = modulo_exp(a, temp, p);
        while(temp != p-1 && mod != 1 && mod != p - 1) {
            mod = mulmod(mod, mod, p);
            temp *= 2;
        }
        if(mod != p-1 && temp % 2 == 0)
            return false;
       
    }
    return true;
}