#include <stdio.h>
#define TOTAL_ASCII 255
#define START_PRINTABLE_CHARACTERS 32
#define START_EXTENDED_CHARACTERS 128

main() {
	int ascii[TOTAL_ASCII];
	int i,c;
	
	for(i = 0; i < TOTAL_ASCII; i++) 
		ascii[i] = 0;

	while((c = getchar()) != EOF) {
		ascii[c]++;
	}
										   
	printf("_________________________________\n");
	printf("|   #\t  Caracter\tTotal   |\n");
	printf("─────────────────────────────────\n");
	for(i = START_PRINTABLE_CHARACTERS; i < START_EXTENDED_CHARACTERS; i++) {
		printf("|  %3d\t  %1c\t\t%3d\t|\n", i, i, ascii[i]);
	}
	printf("_________________________________\n");
}