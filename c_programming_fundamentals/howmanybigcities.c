#include <stdio.h>

int main(void) {
    int target;
    scanf("%d", &target);
    
    int count = 0;
    
    int i;
    for (i = 0;i < target; i++) {
        int num;
        scanf("%d", &num);
        if (num > 10000) {
            count += 1;
        }
    }
    
    printf("%d", count);
    
    return 0;
}
