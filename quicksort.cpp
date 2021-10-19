#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int partition(int array[], int, int);
void quicksort(int array[], int first, int last)
{
    int pi;
    if (first < last)
    {
        pi = partition(array, first, last);
        quicksort(array, first, pi - 1);
        quicksort(array, pi + 1, last);
    }
}

int partition(int array[], int first, int last)
{
    int i, j, temp, pivot = array[first];
    i = first + 1;
    j = last;
    // printf("Pivot = %d\n", pivot);
    while (i <= j)
    {
        while (array[i] <= pivot && i <= last)
            i++;
        while (array[j] > pivot && j >= first)
            j--;
        if (i < j)
        {
            // printf("Swapping %d and %d \n", array[i], array[j]);
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    // printf("Swapping %d and %d \n", array[j], pivot);
    temp = array[first];
    array[first] = array[j];
    array[j] = temp;
    return j;
}

int main()
{
    int i, n = 5000;
    while (n <= 1200000)
    {
        int array[1200000];
        time_t initial, final;
     // printf("Total number of elements  : ");
     // scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            array[i] = rand();
        }
        time(&initial);
        quicksort(array, 0, n - 1);
        time(&final);
      
        printf("Sorted Order : ");
        // for (i = 0; i < n; i++)
        // {
        //     printf("%d ", array[i]);
        // }
        // printf("\nTotal time taken to Sort %d elemets : %f\n", n, difftime(final, initial) / CLOCKS_PER_SEC);

        double time_taken = double(final - initial);
        printf("for n= %d  time = %f \n", n, time_taken);
        n += 50000;
    }
}
