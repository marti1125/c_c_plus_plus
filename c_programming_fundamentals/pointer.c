#include <stdio.h>

# define SIZE 5

int main(void)
{

    int grades[SIZE]= {78, 67, 92, 83, 88};
    double sum = 0.0;
    double *ptr_to_sum = &sum;
    int i;

    printf("\n my grades are: \n");

    for (i = 0; i < SIZE; i++) {
        printf("%d\t", grades[i]);
    }

    printf("\n\n");

    for (i = 0; i < SIZE; i++) {
        sum = sum + grades[i];
    }

    printf("my average is %.2f\n\n", sum/SIZE);

    printf("sum is at %p, or %lu and is %lf\n", ptr_to_sum, ptr_to_sum, *ptr_to_sum);

    printf("grades are at %lu to %lu\n", grades, grades + 5);

    return 0;

}