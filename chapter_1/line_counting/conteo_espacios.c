#include <stdio.h>

main() {

	int c = 0, n = 0;
	while( (c = getchar()) != EOF) {
		if(c == ' ')
			++n;	
	}
	printf("Total de espacios en blanco: %d\n", n);

}