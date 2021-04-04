#include <stdio.h>

/*
 
 getLine
 if length > 80
    print line
 
 */

char getLine(int len)[];

int main() {
    int len = 1;
    char line[1000];
    
    
    while (line=getLine(len) == line && len > 0)
        if (len > 80)
            printf("%s", line);
    
    return 0;
}

char getLine(int len)[] {
    char line[1000];
    
    int c, i;
    
    for (i = 0; (c=getchar()) != '\n' && c != EOF; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    len = i;
    
    return line;
}
