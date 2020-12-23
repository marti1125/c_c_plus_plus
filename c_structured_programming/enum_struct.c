/*
 * Option 1 (General)
 * Willy Aguirre
 * 2020-12-17
*/

#include <stdio.h>

// enum with the list of months
typedef enum month
{ 
    jan, feb, mar, apr, may, jun, jul, agu, sep, oct, nov, dec
} month;

// a struct when indicated month and day
typedef struct date
{ 
    month m; 
    int d;
} date;

// calcular whats is the next of day or pass to then next month
date calc(date d, int last_date, month next_month)
{   
    if (d.d >= 1 && d.d < last_date) {
        d.d = d.d + 1;
        return (d);
    } else {
        d.d = 1;
        d.m = next_month;
        return (d);
    }
}

// next_day define what is the last day and next month
date next_day(date d)
{
    
    switch (d.m)
    {
    case jan:
        return calc(d, 31, feb);
        break;
    case feb:
        return calc(d, 28, mar);
        break;
    case mar:
        return calc(d, 31, apr);
        break;
    case apr:
        return calc(d, 30, may);
        break;
    case may:
        return calc(d, 31, jun);
        break;
    case jun:
        return calc(d, 30, jul);
        break;
    case jul:
        return calc(d, 31, agu);
        break;
    case agu:
        return calc(d, 31, sep);
        break;
    case sep:
        return calc(d, 30, oct);
        break;
    case oct:
        return calc(d, 31, nov);
        break;
    case nov:
        return calc(d, 30, dec);
        break;
    case dec:
        return calc(d, 31, jan);
        break;
    default:
        break;
    }
    return (d);
}

// print_date replace enum of months for name of the month
void print_date(date d)
{   
    switch (d.m)
    {
    case jan:
        printf("The next day is Janury %d \n", d.d);
        break;
    case feb:
        printf("The next day is February %d \n", d.d);
        break;
    case mar:
        printf("The next day is March %d \n", d.d);
        break;
    case apr:
        printf("The next day is April %d \n", d.d);
        break;
    case may:
        printf("The next day is May %d \n", d.d);
        break;
    case jun:
        printf("The next day is June %d \n", d.d);
        break;
    case jul:
        printf("The next day is July %d \n", d.d);
        break;
    case agu:
        printf("The next day is August %d \n", d.d);
        break;
    case sep:
        printf("The next day is September %d \n", d.d);
        break;
    case oct:
        printf("The next day is October %d \n", d.d);
        break;
    case nov:
        printf("The next day is November %d \n", d.d);
        break;
    case dec:
        printf("The next day is December %d \n", d.d);
        break;
    default:
        printf("%u is an error \n", d.m);
        break;
    }
}


int main()
{
    date d = {jan, 28};
    print_date(next_day(d));
    date d2 = {mar, 14};
    print_date(next_day(d2));
    date d3 = {oct, 31};
    print_date(next_day(d3));
    date d4 = {dec, 31};
    print_date(next_day(d4));
    return 0;
}