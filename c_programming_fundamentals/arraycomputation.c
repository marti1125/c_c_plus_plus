#include <stdio.h>

int main(void) {
    int countIngredients;
    scanf("%d", &countIngredients);
    
    double prices[10];
    double weights[10];
    
    int i;
    for (i = 0; i < countIngredients; i++) {
        double num = 0;
        scanf("%lf", &num);
        prices[i] = num;
    }
    
    int f;
    for (f = 0; f < countIngredients; f++) {
        double num = 0;
        scanf("%lf", &num);
        weights[f] = num;
    }
    
    double total = 0.0;
    int z;
    for (z = 0; z < countIngredients; z++) {
        total += prices[z] * weights[z];
    }
    
    printf("%f \n", total);
    
    return 0;
}
