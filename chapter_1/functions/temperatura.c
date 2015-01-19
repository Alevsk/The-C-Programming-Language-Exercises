#include <stdio.h>
#define CONST 32
#define MAX 300

float farhenheitToCelcius(float farh) {
	return (5.0 / 9.0) * (farh - CONST);
}

int main() {
	int i = 0;

	for(; i <= MAX; i+=20)
		printf("%d : %.3f\n",i,farhenheitToCelcius(i));

	return 0;
}