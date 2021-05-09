#include <stdio.h>
#include <ctype.h>

int any(char s1[], char s2[]);

int main() {
    
    char s1[] = "lorem ipsum";
    
    char s2[] = "lu";
    
    int loc = any(s1, s2);
    
    printf("%d\n", loc);
    
	return 0;
}

int any(char s1[], char s2[]) {
    int i, j, c;
    int location = -1;
    for (i = 0; s1[i] != '\0'; ++i) {
        int found = 0;
        for (j = 0; s2[j] != '\0'; j++) {
            int c = s2[j];
            if (s1[i] == c)
                found = 1;
        }
        if (found) {
            location = i;
            break;
        }
    }
    
    return location;
}
