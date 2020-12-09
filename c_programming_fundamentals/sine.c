// Willy Aguirre
// Write a program that prints the sine function for an input x between (0, 1)
// 08/12/2020

#include <stdio.h>
#include <math.h>

int main()
{   
    double x;
    double result;
    printf("Enter value X: ");
    scanf("%lf", &x);
    result = sin(x);
    if (result > 0 && result < 1) {
        printf("[OK] The Sine of %.2lf is %lf \n\n", x, result);
    } else {
        printf("[FAIL] The Sine of %.2lf is %lf (the result must between 0 and 1) \n\n", x, result);
    }
    
    return 0;
}