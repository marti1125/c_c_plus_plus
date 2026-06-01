#include <stdio.h>

int main() {
    int count = 1;
    int membersPerTeam;
    int weight;
    int weightsTeam1 = 0;
    int weightsTeam2 = 0;
       
    scanf("%d", &membersPerTeam);
    
    while (count <= membersPerTeam * 2) {
        scanf("%d", &weight);
        
        int r = count % 2;
        if (r == 0) {
            weightsTeam2 += weight;
        } else {
            weightsTeam1 += weight;
        }
        
        count += 1;
    }
    
    if (weightsTeam1 > weightsTeam2) {
        printf("Team 1 has an advantage \n");
    } else if (weightsTeam2 > weightsTeam1) {
        printf("Team 2 has an advantage \n");
    } else {
        printf("Both teams are evenly matched! \n");
    }
    
    printf("Total weight for team 1: %d \n", weightsTeam1);
    printf("Total weight for team 2: %d", weightsTeam2);
   
    return 0;
}
