#include <stdio.h>

#define IN 1
#define OUT 0

/* count digits, white space, others */
//main() {
//    int c, i, nwhite, nother;
//    int ndigit[10];
//
//    nwhite = nother = 0;
//    for (i = 0; i < 10; ++i)
//        ndigit[i] = 0;
//
//    while ((c=getchar()) != EOF)
//        if (c >= '0' && c <= '9')
//            ++ndigit[c-'0'];
//        else if (c == ' ' || c == '\n' || c == '\t')
//            ++nwhite;
//        else
//            ++nother;
//
//    printf("digit =");
//    for (i = 0; i < 10; ++i)
//        printf(" %d", ndigit[i]);
//    printf(", white space = %d, other = %d\n", nwhite, nother);
//}

/* Exercise 1-13: Write a program to print a histogram of the lengths of words in its input. */

//main() {
//    int c, wordLength, state = OUT;
//    int nWordLength[15];
//
//    for (int i = 0; i < 16; ++i)
//        nWordLength[i] = 0;
//
//    while ((c=getchar()) != EOF)
//        if (c == ' ' || c == '\n' || c == '\t') {
//
//            if (state == IN) {
//                ++nWordLength[wordLength-1];
//                state = OUT;
//            }
//        } else {
//            if (state == OUT) {
//                wordLength = 0;
//                state = IN;
//            }
//            ++wordLength;
//        }
//
//    /* horizontal */
//
////    for (int i = 0; i < 16; ++i) {
////        printf("%d: ", i+1);
////        for (int j = 0; j < nWordLength[i]; ++j) {
////            printf("-");
////        }
////        printf("\n");
////    }
//
//    /* vertical */
//
//    int max = 0;
//
//    //find the max element
//
//    for (int i = 0; i < 16; ++i) {
//        if (nWordLength[i] > max)
//            max = nWordLength[i];
//    }
//
//    for (int i = max; i > 0; --i) {
//        printf("%2d|", i);
//        for (int j = 0; j < 16; ++j) {
//            if (i <= nWordLength[j])
//                printf(" ||");
//            else
//                printf("   ");
//        }
//        printf("\n");
//    }
//    printf("   ");
//    for (int i = 0; i < 16; ++i)
//        printf("---");
//    printf("\n   ");
//
//    for (int i = 1; i < 16; ++i)
//        printf("%3d", i);
//    printf("\n");
//
//}

/* example layout
 
 
7|                   ||
6|                   || ||
5|                   || || || ||
4|             || || || || || || ||
3|          || || || || || || || || ||
2|          || || || || || || || || || || ||
1|       || || || || || || || || || || || ||
  ------------------------------------------------
   00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15
 
 */


/* Exercise 1-14: Write a program to print a histogram of the frequencies of different characters in its input.n */

main () {
    int c, i;
    int nCharacter[26];
    
    for (i = 0; i < 26; ++i)
        nCharacter[i] = 0;
    
    while ((c=getchar()) != EOF)
        if (c >= 'a' && c <= 'z')
            ++nCharacter[c-'a'];
    
        int max = 0;
    
        //find the max element
    
        for (i = 0; i < 26; ++i) {
            if (nCharacter[i] > max)
                max = nCharacter[i];
        }
    
        for (i = max; i > 0; --i) {
            printf("%2d|", i);
            for (int j = 0; j < 26; ++j) {
                if (i <= nCharacter[j])
                    printf(" ||");
                else
                    printf("   ");
            }
            printf("\n");
        }
        printf("   ");
        for (i = 0; i < 26; ++i)
            printf("---");
        printf("\n   ");
    
        for (i = 0; i < 26; ++i) {
            printf("  ");
            putchar('a'+i);
        }
        printf("\n");
    
    
    
}


