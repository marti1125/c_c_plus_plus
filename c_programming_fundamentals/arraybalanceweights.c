#include <stdio.h>

int main(void) {
    int countBoxcars;
    double boxCars[50];
    scanf("%d", &countBoxcars);
    
    int i;
    double totalWeight = 0.0;
    for (i = 0; i < countBoxcars; i++) {
        double num = 0;
        scanf("%lf", &num);
        totalWeight += num;
        boxCars[i] = num;
    }
    
    double weight = totalWeight / countBoxcars;
    
    for (i = 0; i < countBoxcars; i++) {
        double result = weight - boxCars[i];
        printf("%.1f \n", result);
    }
    
    return 0;
}
