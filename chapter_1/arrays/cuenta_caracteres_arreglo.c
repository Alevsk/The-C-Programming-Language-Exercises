#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define TOTAL 10

/* Cuenta digitos, espacios en blanco y otros */

main() {
	int c,i,nblank,nother;
	c = i = nblank = nother = 0;
	int ndigitos[TOTAL];

	for(; i < TOTAL; i++)
		ndigitos[i] = 0;

	while((c = getchar()) != EOF) {
		//printf("%c:%d\n",c,c);
		if(c >= '0' && c <= '9') {
			ndigitos[c-'0']++;
		} else if(c == ' ' || c == '\t' || c == '\n') {
			nblank++;
		} else {
			nother++;
		}
	}

	printf("Digitos: ");
	for(i = 0; i < TOTAL; i++)
		printf("%d ", ndigitos[i]);

	printf("Espacios en blanco: %d Otros caraceres: %d\n", nblank , nother);
}