#include <stdio.h>

/* Programa que imprime una tabla de relacion
 * entre temperaturas Farhenheit y Celcius */

 main() {
 	float fahr, celcius;
 	int lower, upper, step;

 	lower 	= 0;
 	upper 	= 300;
 	step 	= 20;
 	celcius = lower;

 	printf("*************************\n");
 	printf("* Celcius\tFarhenheit *\n");
 	printf("*************************\n");

 	while(celcius <= upper) {
 		fahr = (celcius * (9.0 / 5.0)) + 32; 
 		printf("%3.0f\t%14.1f\n",celcius,fahr);
 		celcius = celcius + step;
 	}
 }