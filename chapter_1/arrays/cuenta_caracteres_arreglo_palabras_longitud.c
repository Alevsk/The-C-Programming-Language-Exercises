#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define TOTAL 10
#define START_PRINTABLE_CHARACTERS 32
#define START_EXTENDED_CHARACTERS 128

/* Cuenta digitos, espacios en blanco y otros */

main() {
	int c,i,nblank,nother,wordlong,inword;
	c = i = nblank = nother = wordlong = inword = 0;
	int ndigitos[TOTAL];

	for(; i < TOTAL; i++)
		ndigitos[i] = 0;

	printf("__________________________________\n");
	printf("| Palabra\t\tLongitud |\n");
	printf("──────────────────────────────────\n");

	while((c = getchar()) != EOF) {
		
		if(c == ' ' || c == '\n' || c == '\t' || c == '\b') {
			printf(" : %d caracteres\n",wordlong);
			wordlong = 0;
		} else {
			wordlong++;
			putchar(c);
		}

		/****************************/

		if(c >= '0' && c <= '9') {
			ndigitos[c-'0']++;
		} else if(c == ' ' || c == '\t' || c == '\n') {
			nblank++;
		} else {
			nother++;
		}
	}

	printf("\n\nDigitos: ");
	for(i = 0; i < TOTAL; i++)
		printf("%d ", ndigitos[i]);

	printf("Espacios en blanco: %d Otros caraceres: %d\n", nblank,nother);
}