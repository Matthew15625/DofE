//
//  tempConversion.c
//  
//
//  Created by Matthew on 09/03/2021.
//

#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

#define    LOWER   -40
#define    UPPER   140
#define    STEP    -1

int main() {
    
    printf("\nFahrenheit to Celsius table\n\n");
    
    int fahr;
    
    for (fahr = UPPER; fahr >= LOWER; fahr += STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
