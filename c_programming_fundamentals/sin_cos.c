/**
 * Write a C program that has a function that prints a table of values for sine and cosine between (0, 1)
 * @version 1.0
 * @author Willy Aguirre
*/

#include <stdio.h>
#include <math.h>

int main(void) {

    double interval;
    int i;
    
    // interval (0, 1)
    for(i = 0; i <= 10; i++)
    {
        interval = i/10.0;
        printf("sin( %lf ) = %lf AND cos( %lf ) = %lf \n", interval, sin(interval), interval, cos(interval));
    }

    return 0;
}