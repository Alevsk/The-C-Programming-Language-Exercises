#include <stdio.h>

/* Programa que imprime una tabla de relacion
 * entre temperaturas Farhenheit y Celcius */

#define lower 0
#define upper 300
#define step  20

 main() {
 	float fahr, celcius;
 	fahr = upper;

 	printf("*************************\n");
 	printf("* Farhenheit\tCelcius *\n");
 	printf("*************************\n");

 	while(fahr >= lower) {
 		celcius = (5.0 / 9.0) * (fahr - 32);
 		printf("%3.0f\t%14.1f\n",fahr,celcius);
 		fahr = fahr - step;
 	}
 }