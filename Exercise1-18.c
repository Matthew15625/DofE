#include <stdio.h>

#define IN 1
#define OUT 0

void getLine(char[]);

int main() {
    char line[1000];
    
    for (int i = 0; i < 1000; ++i)
        line[i] = 0;
    
    while (line[0] != EOF) {
        getLine(line);
        printf("%s", line);
    }
    
    return 0;
}

void getLine(char line[]) {
    int c, i;
    int state = OUT;
    int endOfLine = 0;
    
    for (i = 0; (c=getchar()) != EOF && c != '\n'; ++i) {
        if (c == ' ' || c == '\t') {
            if (state == IN) {
                state = OUT;
                endOfLine = i;
            }
        } else {
            if (state == OUT) {
                state = IN;
            }
        }
        line[i] = c;
    }
    
    if (state == IN) {
        endOfLine = i;
    }
    
    if (endOfLine == 0) {
        line[0] = '\0';
    } else {
        line[endOfLine] = c;
        line[endOfLine+1] = '\0';
    }
}
