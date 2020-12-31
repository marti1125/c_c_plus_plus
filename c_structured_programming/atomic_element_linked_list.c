/*
 * Option 2 (Natural or Social Science Focus)
 * Willy Aguirre
 * 2020-12-31
 * I took some ideas from https://www.learn-c.org/en/Linked_lists
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// only ten items
#define MAX_ELEMENTS 10

// struct for Atomic Element
typedef struct atomic_element
{
    char element[20]; // a char with size 20
    char symbol[20]; // a char with size 20
    double weight;
    struct atomic_element *next; // usefull for linked lists
} atomic_element_t;

// print the result for element in table
void print_list(atomic_element_t * head) {
    atomic_element_t * current = head;

    printf("\n");
    printf("+------------------------------------------------+\n");
    printf("| No. | Atomic weight | Name            | Symb.  |\n");
    printf("+-----+---------------+-----------------+--------+\n");

    int i = 0;
    while (current != NULL) { 

        if (current->weight > 0) {
            i = i + 1;
            // string padding https://stackoverflow.com/questions/276827/string-padding-in-c
            printf("| %-3d | %-13.3f | %-15s | %-6s |\n",
            i, current->weight, current->element, current->symbol);
        }
        
        current = current->next;     
        
    };
    
    printf("+------------------------------------------------+\n");
    printf("\n\n");   

}

// push new element
void push(atomic_element_t *head, char e[20], char s[20], double w) {
    
    atomic_element_t* current = head;
    
    while (current->next != NULL) {
        current = current->next;
    }

    /* now we can add a new variable */
    current->next = (atomic_element_t *) malloc(sizeof(atomic_element_t));
    // copy the value from parameters
    // http://www.cplusplus.com/reference/cstring/memcpy/
    memcpy(current->next->element, e, 20);
    memcpy(current->next->symbol, s, 20);
    current->next->weight = w;
    current->next->next = NULL;
}


int main()
{   

    atomic_element_t * head = NULL;
    head = (atomic_element_t *) malloc(sizeof(atomic_element_t));

    // a validation of variable head
    if (head == NULL) {
        return 1;
    }

    int i;

    // use this variable for get value from terminal
    char e[20];
    char s[20];
    double w;

    printf("\nEnter details of 10 Atomic Element \n\n");

    for (i = 0; i < MAX_ELEMENTS; i++)
    {   
        printf("Add item %d \n", i+1);

        printf("Enter element: ");
        scanf("%s", e);

        printf("Enter symbol: ");
        scanf("%s", s);

        printf("Enter atomic weight: ");
        scanf("%lf", &w);

        push(head, e, s, w);

        printf("\n");

    }

    //push(head, "Hrydogen", "H", 1.03);
    //push(head, "Helium", "He", 1.08);

    print_list(head);

    return 0;
}