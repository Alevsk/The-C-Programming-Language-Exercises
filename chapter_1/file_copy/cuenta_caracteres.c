#include <stdio.h>

/* cuenta los caracteres de entrada*/

main() {
	double n = 0;

	while(getchar() != EOF) {
		++n;
	}

	/*for(; getchar() != EOF; ++n)
		;*/

	printf("numero de caracteres:%f\n", n);
}