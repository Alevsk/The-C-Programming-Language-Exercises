#include <stdio.h>

/* Programa que imprime una tabla de relacion
 * entre temperaturas Farhenheit y Celcius */

 main() {
 	float fahr, celcius;
 	int lower, upper, step;

 	lower 	= 0;
 	upper 	= 300;
 	step 	= 20;
 	fahr = lower;

 	printf("*************************\n");
 	printf("* Farhenheit\tCelcius *\n");
 	printf("*************************\n");

 	while(fahr <= upper) {
 		celcius = (5.0 / 9.0) * (fahr - 32);
 		printf("%3.0f\t%14.1f\n",fahr,celcius);
 		fahr = fahr + step;
 	}
 }