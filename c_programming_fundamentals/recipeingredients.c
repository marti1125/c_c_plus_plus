#include <stdio.h>

int main(void) {
    int size = 10;
    int ingredients[10];
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &ingredients[i]);
    }
    
    int quantities;
    scanf("%d", &quantities);
    
    printf("%d", ingredients[quantities]);
    return 0;
}
