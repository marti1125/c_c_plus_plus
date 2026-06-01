#include <stdio.h>

int main() {
    
    int numberOne;
    int numberTwo;
    
    scanf("%d", &numberOne);
    scanf("%d", &numberTwo);
    
    int sum = numberOne + numberTwo;
    int result = 0;
    
    if (sum >= 10) {
        printf("Special Tax \n");
        result = 36;
    } else {
        printf("Regular Tax \n");
        result = sum * 2;
    }
    
    printf("%d", result);
    
    return 0;
}
