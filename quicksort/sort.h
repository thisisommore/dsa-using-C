#include <stdio.h>
#include "./paritition.h"
#include <math.h>
// float a[] = {10, 4, 5, 3, 7, 2, 78, INFINITY};

void quickSort(struct Student (*students)[], int p, int q)
{
    if (p < q)
    {
        int j = partition(students, p, q);
        quickSort(students, p, j - 1);
        quickSort(students, j + 1, q);
    }
}