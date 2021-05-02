#include <stdio.h>

int getLine(char line[], int);

int main() {
    int len;
    char line[1000];
    
    while ((len=getLine(line, 50)) > 0)
        printf("%s", line);
    
    return 0;
}

int getLine(char line[], int lim) {
    
    int i, c;
    
    /* original
     for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
        s[i] = c;
     */
    
    /* without && and || */
    
    for (i = 0;  i<lim-1; ++i) {
        c = getchar();
        if (c != '\n') {
            if (c != EOF) {
                line[i] = c;
            } else {
                break;
            }
        } else {
            break;
        }
    }
    
    if (c == '\n') {
        line[i]  = c;
        ++i;
    }
    
    line[i] = '\0';
    
    return i;
}
