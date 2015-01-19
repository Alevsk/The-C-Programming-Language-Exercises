#include <stdio.h>

int power(int m, int n);
int power2(int base, int n);
/* Prueba de  la funcion power / potencia */
int main() {
	int i = 0;
	for(; i <= 10; i++)
		printf("%d a la %d es %d\n", 2, i, power2(2,i));

	return 0;
}

int power(int m, int n) {
	int i , r;
	r = 1;
	for(i = 1; i <= n; i++)
		r = r * m;

	return r;
}

int power2(int base, int n) {

	int p = 1;
	for(; n > 0; n--) {
		p = p * base;
	}

	return p;

}