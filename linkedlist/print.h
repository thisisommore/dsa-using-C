#include <stdio.h>

void print()
{
    if (h == NULL)
        return;

    struct Node *temp = h;

    printf("Linked list is ");
    while (temp != NULL)
    {
        printf(
            "%d ",
            temp->value);
        temp = temp->next;
    }
    printf("\n");
}