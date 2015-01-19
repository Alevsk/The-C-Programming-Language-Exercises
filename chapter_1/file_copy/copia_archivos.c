#include <stdio.h>

/* Copia la entrada a la salida */

main() {
		int c;

		/*c = getchar();
		while(c != EOF) {
			putchar(c);
			c = getchar();
		}*/

		printf("EOF vale %d\n", EOF);

		while((c = getchar()) != EOF) {
			putchar(c);
		}
}