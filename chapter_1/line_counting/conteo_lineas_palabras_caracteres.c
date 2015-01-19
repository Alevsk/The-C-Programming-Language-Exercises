#include <stdio.h>
#define TRUE 1
#define FALSE 0

/**			aqui hay tabuladores
  *	\\	aqui hay dos diagonales invertidas
  */

main()        {
	int c = 0, lines = 0, word = 0, inword = FALSE, nc;
	while((c = getchar()) != EOF) {
		nc++;

		if(c == '\n')
			lines++;

		if(c != ' ' && c != '\n' && c != '\t' && inword == FALSE) {
			word++;
			inword = TRUE;
		} else {
			inword = FALSE;
		}
	}

	printf("Caracteres: %d Lineas: %d Palabras: %d\n",nc,lines,word);
}