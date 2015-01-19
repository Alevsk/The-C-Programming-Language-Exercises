#include <stdio.h>
#define MAXLINE 1000

int currentLength; /* Length of the current line */
int max = 0; /* current max length */
char currentLine[MAXLINE];
char longestLine[MAXLINE];

int getLine(void);
void copyLine(void);


int main() {

	extern int currentLength; /* Length of the current line */
	extern int max; /* current max length */
	extern char currentLine[MAXLINE];
	extern char longestLine[MAXLINE];

	while((currentLength = getLine()) > 0) {
		if(currentLength > max) {
			copyLine();
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

void copyLine(void) {
	int i = 0;
	while((currentLine[i] = longestLine[i]) != '\0')
		i++;
}

int getLine(void) {
	int n = 0, c = 0;
	while( (c = getchar()) != EOF) {
		currentLine[n] = c;
		n++;
		if(c == '\n') {
			currentLine[n] = '\0';
			return (n+1);
		}		
	}
	return 0;
}