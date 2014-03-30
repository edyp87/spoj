/**
	@name:     506_flamaster
	@author:   Marek Jenda
	@revision: 1.0
	@date:     23.12.2013
	@info:     pl.spoj.com/problems/FLAMASTE/
**/


#include <iostream>
#include <cstdlib>
#include <cstdio>

typedef unsigned char uch;

void rle(char*);

int main(void)
{
	int n;
	char napis[201];
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%s", napis);
		 rle(napis);
	}
	return 0;
}

void rle(char* napis) {
	uch i = 1, j = 0, cur_n = 1;
	char cur;

	if((cur = napis[0]) == '\0') return;

	while(true) {
		if(napis[i] != '\0') {
			if(napis[i] != cur) {
				putchar(cur);
				if(cur_n > 2)
					printf("%d", cur_n);
				else if(cur_n > 1) 
					putchar(cur);
				cur = napis[i];
				cur_n = 1;
				i++;
			} else {
				cur_n++;
				i++;
			}
		} else {
			putchar(cur);
			if(cur_n > 2)
				printf("%d", cur_n);
			else if(cur_n > 1) 
				putchar(cur);
			break;
		}
	}

	putchar('\n');
	return;
}