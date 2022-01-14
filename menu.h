#include <stdio.h>

void printStudent(struct Student (*students)[], int size)
{
    printf("---------------------------\n");
    printf("Students are \n");
    printf("---------------------------\n");
    for (unsigned int i = 0; i < size; i++)
    {
        printf("Name %s\n"
               "Roll No %d\n"
               "---------------------------\n",
               (*students)[i].name, (*students)[i].rollNo);
    }
}

void menu(struct Student (*students)[], int size)
{
    printf("Enter sort algo\n"
           "1. Merge Sort\n"
           "2. Quick Sort\n"
           "3. Exit\n");
    int option = 3;

    scanf("%d", &option);
    switch (option)
    {
    case 1:
        mergeSort(students, 0, size - 1);
        printStudent(students, size);
        break;
    case 2:
        quickSort(students, 0, size - 1);
        printStudent(students, size);
        break;
    case 3:
        printf("BYE BYE\n");
        return;
    default:
        break;
    }
}
