#include <stdio.h>

    // Replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops.

#define MAXLENGTH 100 // max line length

void detab(char[]);
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
//    printf("\nstart\n");

    for (i=0; i<MAXLENGTH-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
//        printf("%s\n", line);
        if (c == '\t') {
            // work out distance to tab stop
            int j = i;
            n = 4 - (i % 4);
//            printf("%d %d\n", n, j);
//            printf("Start\n");
            for (j = i; j<(i+n); ++j) {
//                printf("%d\n", j);
                line[j] = ' ';
            }
//            printf("end\n");
            i = j - 1;
        } else {
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
/*
void detab(char line[], int len) {
    for (i=0; i<len; ++i;) {
        if (line[i] == '\t') {
            // work out distance to tab stop
}
*/
