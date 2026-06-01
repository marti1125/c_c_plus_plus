#include <stdio.h>

int main(void) {
    int customerAge;
    int weightLuggage;
    
    scanf("%d", &customerAge);
    scanf("%d", &weightLuggage);
    
    int cost = 0;

    if (customerAge == 60) {
        cost += 0;
    } else if (customerAge < 10) {
        cost += 5; 
    } else {
        cost += 30;
        if (weightLuggage > 20) {
            cost += 10;
        }
    }
    
    printf("%d", cost);
    
    return 0;
}
