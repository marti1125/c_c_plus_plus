/*
 * Option 1 (General)
 * Willy Aguirre
 * 2021-01-03
*/

#include <stdio.h>

#define SIZE 4 // the size of array by default

// read data from file and put it on array of ints
void read_data(FILE *ptr, int d[], int *size)
{
    *size = 0;
    // get each value from the file, always return true/1
    while (fscanf(ptr, "%d", &d[*size]) == 1)
    {
        (*size)++;
    }  
}

// get the avarage from array of ints
double average(int d[], int size)
{
    int i;
    double avg = 0.0;
    for (i = 0; i <= size; i++)
    {
        avg += d[i];
    }
    return (avg/size);
}

// get the max value from array of ints
int max(int d[], int size)
{
    int x, i;
    //storing the largest number to x
    for (i = 0; i <= size; i++)
    {
        if (x < d[i])
        {
            x = d[i];
        }
    }
    return x;
}

// write the result into a new file
void write_result(FILE *ofp, int d[], int size)
{   
    // open the new file in write mode
    ofp = fopen("answer-hw3", "w");
    // writes the average
    fprintf(ofp, "Average %.2f", average(d, size));
    // writes a line break
    fprintf(ofp, "\n");
    // writes the largest elment
    fprintf(ofp, "Largest element %d", max(d, size));
    // closes output file
    fclose(ofp);
}

int main()
{   

    int sz = SIZE; // assing the size
    FILE *ifp, *ofp; // input and output file
    int data[SIZE]; // array of int with SIZE

    ifp = fopen("avg", "r"); // open the file only in read mode
    read_data(ifp, data, &sz);

    // print the average
    printf("Average %.2f", average(data, sz));
    printf("\n");
    // print the largest element    
    printf("Largest element %d", max(data, sz));

    // close the input file
    fclose(ifp);

    // write the result into a new file
    write_result(ofp, data, sz);   

    return 0;
}