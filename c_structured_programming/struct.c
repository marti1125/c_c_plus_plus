#include <stdio.h>

struct point{
   double x;
   double y;
} p1 = { 2.5, 4.0}; 

int main()
{   

    struct point* ptr = &p1;

    struct point p2 = {4, 4.0};

    struct point p3;

    struct point p4 = {2.5};

    struct point p5 = {4, p5.x};

    struct point* ptr2 = &p4;

    struct point* ptr3 = &p5;

    printf("%lf\n", ptr->y);

    printf("%f\n", p2.x);

    printf("%f\n", p1.x);

    printf("%lf\n", p3.y);

    printf("%f\n", ptr2->x);

    printf("%f\n", ptr3->y);

    return 0;

}