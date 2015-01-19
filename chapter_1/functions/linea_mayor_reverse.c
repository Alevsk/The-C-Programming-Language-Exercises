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
	/*  max = currentLength; Linea grande para ejemplo de reversion de linea eaeaeae xD */
	if(max > 0) {
		printf("La linea mas grande fue (%d caracteres):\n%s\n", max, longestLine);
		printf("Linea reversa:\n");
		for (int i = max; i >= 0; --i) {
			printf("%c",longestLine[i]);
		}
		printf("\n");

	} else {
		printf("Error: no hubo lineas\n");
	}		
	return 0;
}

void copyLine(char from[], char	to[]) {
	int i = 0;
	while((to[i] = from[i]) != '\0')
		i++;
}

int getLine(char saveTo[]) {
	int n = 0, c = 0;
	while( (c = getchar()) != EOF) {
		saveTo[n] = c;
		n++;
		if(c == '\n') {
			saveTo[n] = '\0';
			return (n+1);
		}		
	}
	return 0;
}