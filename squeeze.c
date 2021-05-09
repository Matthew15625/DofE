#include <stdio.h>
#include <ctype.h>

void squeeze(char s1[], char s2[]);

int main() {
    
    char s1[100] = "Pellentesque a tempor felis. Nam sed orci sagittis est consequat";

    char s2[10] = "aeiou";
    
    squeeze(s1, s2);
    
    printf("%s\n", s1);
    
    return 0;
}

void squeeze(char s1[], char s2[]) {
    int i, j;
    
    for (i = j = 0; s1[i] != '\0'; i++) {
        int found = 0;
        for (int k = 0; s2[k] != '\0'; k++) {
            int c = s2[k];
            if (s1[i] == c)
                found = 1;
        }
        if (!found)
            s1[j++] = s1[i];
    }
    
    s1[j] = '\0';
}
