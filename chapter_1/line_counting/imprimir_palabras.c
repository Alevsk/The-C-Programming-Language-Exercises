#include <stdio.h>

#define TRUE 1
#define FALSE 0

main() {
	int c = 0;
	while((c = getchar()) != EOF) {
		if(c == ' ' || c == '\n' || c == '\t')
			printf("\n");
		
		putchar(c);
	}
}