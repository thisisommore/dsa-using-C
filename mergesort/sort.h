#include <stdio.h>
#include "merge.h"
#define MAX 100
// TODO: don't use max, use dyanmic instead

void mergeSort(struct Student (*students)[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(students, low, mid);
        mergeSort(students, mid + 1, high);
        merge(*students, low, mid, high);
    }
}
