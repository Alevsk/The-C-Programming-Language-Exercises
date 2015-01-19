#include <stdio.h>
#define TRUE 1
#define FALSE 0

main()        {
	int c = 0;
	int blank = FALSE;
	while((c = getchar()) != EOF) {
		if(c != ' ') {
			blank = FALSE;
			putchar(c);
		} 

		if(c == ' ' && blank == FALSE) {
			blank = TRUE;
			putchar(c);
		}
	}
}