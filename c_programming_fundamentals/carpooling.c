#include <stdio.h>

int main() {
    int passengers;
    float costGas;
    float result = 0;
    
    scanf("%d", &passengers);
    scanf("%f", &costGas);
    
    if (passengers > 0) {
        result = (1 + costGas) / (passengers + 1);
    } else {
        result = costGas;
    }
    
    printf("%.2lf", result);
    return 0;
    
}
