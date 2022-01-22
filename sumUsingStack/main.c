#include <stdio.h>
#include "stack.h"
#include "print.h"

void main()
{
    printf("Enter number of elements to push in stack - ");

    int count = 0;
    scanf("%d", &count);
    if (count < 0)
    {
        printf("Positive number is required, instead got %d\n", count);
        return;
    }
    for (int i = 0; i < count; i++)
    {
        push();
    }
    print();

    printf("Enter value for n - ");
    int n = 0;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Positive number is required, instead got %d\n", n);
        return;
    }
    int numbersToIgnore = count - n;
    if (numbersToIgnore < 0)
    {
        printf("n(%d) is greater than stack size %d\n", n, count);
        return;
    }
    for (int i = 0; i < numbersToIgnore; i++)
    {
        pop();
    }
    int result = 0;
    for (int j = 0; j < n; j++)
    {

        result += pop();
    }
    printf("Addtion of first %d numbers is %d\n", n, result);
}