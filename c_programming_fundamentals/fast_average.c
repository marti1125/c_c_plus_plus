/**
 * Average of The average weight of the northern elephant seal
 * @version 1.0
 * @author Willy Aguirre
 */

#include <stdio.h>

int main() 
{   
    FILE *file;
    int number;
    
    // Open the steam
    if ((file = fopen("./c_programming_fundamentals/data.txt", "r")) == NULL) 
    {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        return -1;
    }

    int count = 0;
    double avg = 0;
    int total_sum = 0;

    // EOF End of file reached
    while ((number=fgetc(file))!=EOF)
    {
        count = count + 1;
        total_sum = total_sum + number;
    }

    printf("total sum %d \n", total_sum);
    printf("count %d \n", count);

    // calculate the average
    avg = (double) total_sum / (double) count;

    printf("The average weight of the northern elephant seal (Mirounga angustirostris) is %lf", avg);
    
    printf("\n\n");

    // closes the stream
    fclose(file);
  
    return 0;
    
}