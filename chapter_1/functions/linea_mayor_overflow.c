#include <stdio.h>
#define MAXLINE 1000

int getLine(char saveTo[]);
void copyLine(char from[], char to[]);


int main() {

	int currentLength; /* Length of the current line */
	int max = 0; /* current max length */
	char currentLine[MAXLINE];
	char longestLine[MAXLINE];

	while((currentLength = getLine(currentLine)) > 0) {
		if(currentLength > max) {
			copyLine(currentLine,longestLine);
			max = currentLength;
		}
	}
	/* Comentario super grande eaeaeaeaeae 1 2 3 4 5 6 eaeaeaeaeae xD */ /* Comentario super grande eaeaeaeaeae 1 2 3 4 5 6 eaeaeaeaeae xD */ /* Comentario super grande eaeaeaeaeae 1 2 3 4 5 6 eaeaeaeaeae xD */ /* Comentario super grande eaeaeaeaeae 1 2 3 4 5 6 eaeaeaeaeae xD */ /* Comentario super grande eaeaeaeaeae 1 2 3 4 5 6 eaeaeaeaeae xD */ /* Comentario super grande eaeaeaeaeae 1 2 3 4 5 6 eaeaeaeaeae xD */ /* Comentario super grande eaeaeaeaeae 1 2 3 4 5 6 eaeaeaeaeae xD */ /* Comentario super grande eaeaeaeaeae 1 2 3 4 5 6 eaeaeaeaeae xD */ /* Comentario super grande eaeaeaeaeae 1 2 3 4 5 6 eaeaeaeaeae xD */ /* Comentario super grande eaeaeaeaeae 1 2 3 4 5 6 eaeaeaeaeae xD */ /* Comentario super grande eaeaeaeaeae 1 2 3 4 5 6 eaeaeaeaeae xD */ /* Comentario super grande eaeaeaeaeae 1 2 3 4 5 6 eaeaeaeaeae xD */ /* Comentario super grande eaeaeaeaeae 1 2 3 4 5 6 eaeaeaeaeae xD */ /* Comentario super grande eaeaeaeaeae 1 2 3 4 5 6 eaeaeaeaeae xD */ /* Comentario super grande eaeaeaeaeae 1 2 3 4 5 6 eaeaeaeaeae xD */
	if(max > 0)
		printf("La linea mas grande fue (%d caracteres):\n%s\n", max, longestLine);
	else
		printf("Error: no hubo lineas\n");
	return 0;
}

void copyLine(char from[], char	to[]) {
	int i = 0;
	while((to[i] = from[i]) != '\0')
		i++;
}

int getLine(char saveTo[]) {
	int n = 0, c = 0, ng = 0;
	while( (c = getchar()) != EOF) {
		if(n >= MAXLINE) {
			ng = n;
			printf("Desborde!, caracteres acumulados: %d\n%s\n", n, saveTo);
			int i = 0;
			for(;i < MAXLINE; i++)
				saveTo[i] = 0;

			n = 0;
		} else {
			saveTo[n] = c;
			n++;
		}
		
		if(c == '\n') {
			n += ng;
			saveTo[n] = '\0';
			return (n+1);
		}
	}
	return 0;
}