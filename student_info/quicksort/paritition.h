#include <stdio.h>
#include <math.h>

void swap(struct Student students[], int intA, int intB)
{
    struct Student temp = students[intB];
    students[intB] = students[intA];
    students[intA] = temp;
}

int partition(struct Student student[], int p, int q)
{
    int pivotVal = student[p].rollNo;
    int i = p + 1, j = q;
    while (1)
    {
        while (student[i].rollNo < pivotVal && student[i].rollNo != INFINITY)
        {
            i++;
        }
        while (student[j].rollNo >= pivotVal && i <= j)
        {
            j--;
        }
        if (i < j)
            swap(student, i, j);
        else
        {
            swap(student, j, p);
            return j;
        }
    }
}
