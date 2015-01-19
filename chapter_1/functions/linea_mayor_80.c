#include <stdio.h>
#define MAXLINE 1000
#define MAYOR80 80

int getLine(char saveTo[]);
void copyLine(char from[], char to[]);


int main() {

	int currentLength; /* Length of the current line */
	int max = 0; /* current max length */
	char currentLine[MAXLINE];
	char longestLine[MAXLINE];

	while((currentLength = getLine(currentLine)) > 0) {
		if(currentLength > MAYOR80)
			printf("Linea mayor a %d\n%s\n", MAYOR80, currentLine);

		if(currentLength > max) {
			copyLine(currentLine,longestLine);
			max = currentLength;
		}
	}
	/* tario super grande eaeaeaeaeae 1 2 3 4 5 6 eaeaeaeaeae xD currentLength;currentLength;currentLength;currentLength;currentLength;currentLength;currentLength;*/
	if(max > 0)
		printf("La linea mas grande fue (%d caracteres):\n%s\n", max, longestLine); /* asdjasdjalskdjalksdjlaksjdlajdlakjsdlkasjdl */
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