#include <stdio.h>

main() {

	int c = 0, n = 0;
	while( (c = getchar()) != EOF) {
		if(c == '\n')
			++n;	
	}
	printf("Total de lineas: %d\n", n);

}