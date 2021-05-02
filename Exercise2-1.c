#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    signed char test = 0;
    
    for (int i = 0; i < 200; ++i)
        ++test;
    
    printf("%d\n", test);
}
