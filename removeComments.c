#include <stdio.h>

#define IN 1
#define OUT 0

int getLine(char line[]);

int main() {
    
    char line[1000];
    int len;
    
    while((len = getLine(line)) > 0)
        printf("%s", line);

        
    return 0;
}
// test comment

int getLine(char line[]) {
    int i, c;
    int state = OUT;
    
    int startOfComment = -1;
    
    for (i = 0; (c=getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
        if (c == '/')
            if (state == OUT) {
                state = IN;
            } else {
                // comment has been found
                if (startOfComment == -1)
                    startOfComment = i-1;
            }
            
        else
            if (state == IN)
                state = OUT;
    }
    
    if (startOfComment > -1) {
        i = startOfComment;
    }
    
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    
    return i;
    
}
