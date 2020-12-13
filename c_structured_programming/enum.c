#include <stdio.h>

enum day {sun, mon, tue, wed, thu, fri, sat};

void print_day(enum day d)
{
    switch (d)
    {
    case sun:
        printf("sunday \n");
        break;
    case mon:
        printf("monday \n");
        break;
    case tue:
        printf("tuesday \n");
        break;
    case wed:
        printf("wednesday \n");
        break;
    case thu:
        printf("thursday \n");
        break;
    case fri:
        printf("friday \n");
        break;
    case sat:
        printf("saturday \n");
        break;
    default:
        printf("%d is an error \n", d);
        break;
    }
}

enum day netx_day(enum day d)
{
    return (d + 1 % 7);
}

int main(void) 
{

    enum day today = fri;
    print_day(today);
    printf("\n\n");
    print_day(7);
    print_day(netx_day(today));
    printf("\n\n");
    return 0;

}