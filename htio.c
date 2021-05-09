#include <stdio.h>
#include <ctype.h>

int htoi(char s[]);

int main() {
    
    char s[5] = "3Fa67";
    
    int dec = htoi(s);
    printf("%d\n", dec);
    
    return 0;
}

int htoi(char s[]) {
    int i;
    
    int total = 0;
    
    for (i = 0; s[i] != '\0'; ++i) {
        int c = tolower(s[i]);
        if (isdigit(c)) {
            total = total * 16 + (c - '0');
        } else if (c >= 'a' && c <= 'f') {
            total = total * 16 + (10 + c - 'a');
        }
    }
    
    return total;
    
    
}
