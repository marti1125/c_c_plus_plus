#include <stdio.h>

typedef enum choices {left, left_center = 2, right_center, right = 5} choices;
typedef enum myfoods{butter = 2, milk = 5, cheese = 8, eggs} myfoods;

int main()
{   
    printf("left %u\n", left);
    printf("right_center %u\n", right_center);
    printf("eggs %u\n", eggs);
    return 0;
}