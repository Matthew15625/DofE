#include <stdio.h>

/*
 
 getLine
 if length > 80
    print line
 
 */

int getLine(char line[]);

int main() {
    int len = 1;
    char line[1000];
    
    
    while ((len=getLine(line)) > 0)
        if (len > 80)
            printf("%s", line);
    
    return 0;
}

int getLine(char line[]) {
    int c, i;
    
    for (i = 0; (c=getchar()) != '\n' && c != EOF; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    
    return i;
}
