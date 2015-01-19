#include <stdio.h>
#define TRUE 1
#define FALSE 0

/**			aqui hay tabuladores
  *	\\	aqui hay dos diagonales invertidas
  */

main()        {
	int c = 0;
	while((c = getchar()) != EOF) {
		switch(c) {
			case '\t':
				printf("\\t");
			break;

			case '\b':
				printf("\\b");
			break;

			case '\\':
				printf("\\\\");
			break;

			default:
				putchar(c);
		}
	}
}