#include <stdio.h>

    // Replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops.

#define MAXLENGTH 100 // max line length

#define IN 1
#define OUT 0


int getLine(char[]);

int main() {
    int len;
    char line[MAXLENGTH];

    while((len=getLine(line))) {
        printf("%s", line);
    }
}

int getLine(char line[]) {
    int c, i;

    int n;
    
    int state = OUT;
    int spaceCount;
//    printf("\nstart\n");

    for (i=0; i<MAXLENGTH-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
//        printf("%s\n", line);
        if (c == ' ') {
            line[i] = c;

            if (state == OUT) {
                state = IN;
                spaceCount = 0;
            }
            ++spaceCount;
            if (spaceCount == 4) {
                i = i - 3;
                line[i] = '\t';
                spaceCount = 0;
            }
        } else {
            if (state == IN)
                state = OUT;
            line[i] = c;
        }
//        printf("%d\n",i);

    }

    if (c == '\n') {
        line[i] = c;
        ++i;
    }
//    printf("%s", line);

//    printf("end\n\n");

    line[i] = '\0';
    return i;
}



