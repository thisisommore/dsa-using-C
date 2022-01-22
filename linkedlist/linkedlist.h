#include <stdio.h>

struct Node
{
    int value;
    struct Node *next;
} *h = NULL;

int handleEmpty()
{
    if (h == NULL)
    {
        printf("Linkedin list is empty\n");
        return 1;
    }
    else
        return 0;
}