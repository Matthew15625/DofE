#include  <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside a word

// count lines, words, and characters in input

//main() {
//    int c, nl, nw, nc, state ;
//
//    state = OUT;
//    nl = nw = nc = 0;
//    while ((c=getchar()) != EOF) {
//        ++nc;
//        if (c == '\n')
//            ++nl;
//        if (c == ' ' || c == '\n' || c == '\t')
//            state = OUT;
//        else if (state == OUT) {
//            state = IN;
//            ++nw;
//        }
//    }
//    printf("%d %d %d\n", nl, nw, nc);
//}

/* Exercise 1-11: How would you test the word count program? What kinds of input are most likely to uncover bugs if there are any?
 
 Test it by making a test txt file with lots of words. Then instead of ./a.out, run cat test.txt | ./a.out to 'pipe' the file into the program
 
 multi-byte unicode characters would cause a bug as 3-byte character would appear as 3 separate characters
 */

/* Exercise 1-12: Write a program that prints its input one word per line */

#include <stdio.h>

main() {

    int c;

    while ((c=getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
            printf("\n");
        else
            putchar(c);
    }
}

































