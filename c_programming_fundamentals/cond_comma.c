#include <stdio.h>

int main(void)
{
    int i = 1, j = 2;
    int n;
    // n = (i == j)? 4 : (i < j) ? 3 : 5;
    //n = i, j +1;
    n = (i < j) ? 4 : 6;

    printf("value %d", n);

    return 0;
}