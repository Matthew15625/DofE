#include <stdio.h>

#define MAXLENGTH 20
#define CUTOFF 30


#define IN 1
#define OUT 0

int getLine(char line[]);

int main() {
	char line[100];
	int len = 1;
    
	while ((len = getLine(line)) > 0)
		printf("%s", line);
	return 0;
}




int getLine(char line[]) {
	int i, c;

	int state = OUT;

	int positionOfLastNonBlankCharacter = 0;
    
    char store[50];

    for (i = 0; (c=getchar()) != '\n' && c != EOF; ++i) {
        line[i] = c;
        if (c == ' ' || c == '\t') {
            if (state == IN ) {
                positionOfLastNonBlankCharacter = i;
                state = OUT;
            }
        } else {
            state = IN;
        }
        if (i > MAXLENGTH) {
            if (positionOfLastNonBlankCharacter > 0) {
                for (int count = 0; count < 50; ++count)
                    store[count] = line[count];
                store[positionOfLastNonBlankCharacter + 1] = '\0';
                printf("%s\n", store);
                
                for (int j = 0; j < (i - (positionOfLastNonBlankCharacter)); ++j) {
                    line[j] = line[j+positionOfLastNonBlankCharacter + 1];
                }
                
                i = i - (positionOfLastNonBlankCharacter + 1);
                positionOfLastNonBlankCharacter = 0;
            } else if (i > CUTOFF) {
                line[i+1] = '\0';
                printf("%s\n", line);
                i = -1;
                positionOfLastNonBlankCharacter = 0;
            }
        }
    }

    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
	return i;
}


