#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_ELEMENTS 10

struct atomic_element
{
    char element[20];
    char symbol[20];
    double weight;
};

int main()
{

    struct atomic_element arr_ae[MAX_ELEMENTS];
    int i;

    for (i = 0; i < MAX_ELEMENTS; i++)
    {
        printf("\nEnter details of 10 Atomic Element %d\n\n", i+1);

        printf("Enter name: ");
        scanf("%s", arr_ae[i].element);

        printf("Enter symbol: ");
        scanf("%s", arr_ae[i].symbol);

        printf("Enter atomic weight: ");
        scanf("%lf", &arr_ae[i].weight);

    }

    printf("\n\n");

    printf("+------------------------------------------------+\n");
    printf("| No. | Atomic weight | Name            | Symb.  |\n");
    printf("+-----+---------------+-----------------+--------+\n");
    
    for(i = 0; i < MAX_ELEMENTS; i++ )
    {
        printf("| %-3d | %-13.3f | %c%-14s | %c%-5s |\n",
        (i+1), arr_ae[i].weight,  toupper(arr_ae[i].element[0]), arr_ae[i].element + 1, toupper(arr_ae[i].symbol[0]), arr_ae[i].symbol + 1);
    }

    printf("+------------------------------------------------+\n");
    printf("\n\n");

    return 0;

}     