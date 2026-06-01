#include <stdio.h>

int main() {
    int hoursPastNoon;
    int result = 0;
        
    scanf("%d", &hoursPastNoon);
    
    if (hoursPastNoon >= 1 && hoursPastNoon <= 12) {
        result = hoursPastNoon * 5 + 10;
        if (result > 53) {
            result = 53;
        }
    }
    
    printf("%d", result);

    return 0;
}
