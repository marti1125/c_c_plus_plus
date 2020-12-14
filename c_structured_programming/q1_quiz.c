#include <stdio.h>

enum month{jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};
    
enum month get_month(enum month m)
{
    return(m);
}

enum month next_month(enum month m)
{
    return((m + 1) % 12);
}

int main()
{    
    
    printf("get_month %u\n", get_month(apr));

    printf("next_month %u\n", next_month(dec + 1));

    return 0;
}