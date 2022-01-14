#include "./student.h"
#include "./mergesort/sort.h"
#include "./quicksort/sort.h"
#include "./menu.h"
#include <stdio.h>

void main()
{
    int numberOfStudents = 0;
    printf("Enter number of students - ");
    scanf("%d", &numberOfStudents);
    printf("\n");
    struct Student students[numberOfStudents];
    for (unsigned int i = 0; i < numberOfStudents; i++)
    {
        printf("Enter details of student number %d\n", i + 1);
        printf("Name - ");
        scanf("%s", &students[i].name);

        printf("Roll no - ");
        scanf("%d", &students[i].rollNo);
        printf("\n");
    }
    struct Student(*pStudents)[] = &students;
    menu(pStudents, numberOfStudents);
}