#include "./student.h"
#include "./mergesort/sort.h"
#include "./quicksort/sort.h"
#include "./menu.h"
#include <stdio.h>
#include <conio.h>
#include <string.h>

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
        fflush(stdin);
        fgets(students[i].name, 30, stdin);

        //Remove new line from name
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Roll no - ");
        scanf("%d", &students[i].rollNo);
        printf("\n");
    }
    menu(students, numberOfStudents);
}