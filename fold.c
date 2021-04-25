#include <stdio.h>

#define MAXLENGTH 20
#define CUTOFF 30


#define IN 1
#define OUT 0

int getLine(char line[]);

int main() {
	char line[50];
	int len;
	while ((len = getLine(line)) > 0)
		printf("%s", line);
	return 0;
}

int getLine(char line[]) {
	int i, c;

	int state = OUT;

	int positionOfLastNonBlankCharacter = 0;

	for(i = 0; (c = getchar()) != EOF || c != '\n'; ++i) {
		line[i] = c;
		if (c == ' ' || c == '\t')
			if (state == IN ) {
				positionOfLastNonBlankCharacter = i;
				state = OUT;
			}
		else
			state = IN;
		if (i > MAXLENGTH) {
			if (positionOfLastNonBlankCharacter > 0) {
				line[positionOfLastNonBlankCharacter] = '\0';
				printf("%s", line);
				i = 0;
				positionOfLastNonBlankCharacter = 0;
			} else if (i > CUTOFF) {
				line[i] = '\0';
				printf("%s", line);
				i = 0;
				positionOfLastNonBlankCharacter = 0;
			}
		}
	}

	if (c == '\n') {
		line[i] = '\n';
		++i;
	}
	line[i] = '\0';
	return i;
}


