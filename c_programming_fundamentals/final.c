#include <stdio.h>

int mystery(int p, int q)
{     
    int r;
    if ((r = p % q) == 0)
        return q; 
    else return mystery(q, r);
}

int foobar(int* n){
    *n = *n +1;
    return *n;
}

int main(void)
{
    printf("HELLO\t\tWOrld\n");    

    printf("result mystery(2,6) %d \n\n", mystery(2,6));
    printf("result mystery(7,91) %d \n\n", mystery(7,91));

    char mystr[10];

    printf("size of array %d \n\n", sizeof(mystr));

    int data[5] = {0 ,1, 2, 3, 4}, sum = 0 , i;

    for (i = 0; i < 5 ; i++)
    {
        sum = sum + data[i];
    }

    printf("SUM %d\n\n", sum);

    int t[10] = {1,2,3,4,5,6,7,8,9,10}, j = 6;
    int *p = &t[0];
    printf("print result of array %d\n\n", *(p + j));

    /*i = -10;
    while ( i < 0)
    {  
        printf("ffff");
        i--; 
    }*/

    int a = 3, b = 4, c = 0, d = '1';

    printf("a %% b print expression %d \n", a % b);
    printf("b %% a print expression %d \n", b % a);
    printf("a < b print expression %d \n", a < b);
    printf("c < b && a > 3 print expression %d \n", c < b && a > 3);
    printf("a / b > c print expression %d \n", (double) a / (double) b > c);
    printf("c = a++ print expression %d \n", a++);

    int e = 1, f = 2, g = 3;
    
    printf("a - b * c print expression %d \n", e - f * g);
    printf("c / a * b print expression %d \n", g / e * f);
    printf("a++ + --b print expression %d \n", e++ + --f);
    printf("b = a = c print expression %d \n", f = e = g);

    int y = 0, x = 1, z = 2;

    printf("(y, x, z) print expression %d \n", y && x);
    printf("(y, x, z) print expression %d \n", !!y);
    printf("(y, x, z) print expression %d \n", y|| !z);
    printf("(y, x, z) print expression %d \n",  (y && (x = z)) || (z > x));

    int n = 6;
    printf("foobar(k) = %d, ",foobar(&n) );
    printf("k = %d\n", n);

    return 0;

}