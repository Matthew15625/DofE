#include <stdio.h>

void reverse(int len, char s[]);
int getLine(char s[]);

int main() {
    
    char s[1000];
    int len;
    
    while ((len = getLine(s)) > 0) {
        if (s[len-1] == '\n')
            reverse(len-1, s);
        else
            reverse(len, s);
        printf("%s", s);
    }
    
    return 0;
}

void reverse(int len, char s[]) {
    int temp;
    
    for (int i = 0; (i+1)*2 <= len; ++i) {
        temp = s[i];
        s[i] = s[len-1 - i];
        s[len-1-i] = temp;
    }
    
}

int getLine(char s[]) {
    int c, i;
    
    for (i=0; (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
