/*
Sorting Merge Sort
O (n log n) efficient
*/

#include <stdio.h>

#define SIZE 8

void print_array(int data[], char *str)
{
    int i;
    printf("%s", str);

    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t", data[i]);
    }

}

void merge(int a[], int b[], int c[], int how_many)
{

    int i = 0, j = 0, k = 0;

    while (i < how_many && j < how_many)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        } else
        {
            c[k++] = b[j++];
        }        
    }

    while (i < how_many)
    {
        c[k++] = a[i++];
    }
    
    while (j < how_many)
    {
        c[k++] = a[j++];
    }

}

void mergesort(int key[])
{
    int j, k;
    int w[SIZE];

    for (k = 1; k < SIZE; k *= 2)
    {
        for (j = 0; j < SIZE - k; j += 2 *k)
        {
            merge(key + j, key + j + k, w + j, k);
        }
        for (j = 0; j < SIZE; j++)
        {
            key[j] = w[j];
        }
    }

}

int main(void)
{

    int a[SIZE] = {99, 82, 74, 85, 92, 67, 76, 49};
    print_array(a, "My grades\n");
    printf("\n\n");
    mergesort(a);
    print_array(a, "My sorted grades\n");
    printf("\n\n");

    return 0;

}