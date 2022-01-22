#include <stdio.h>

void search()
{
    if (handleEmpty() == 1)
        return;
    printf("SEARCH - ");
    int valToFind;
    scanf("%d", &valToFind);
    //TODO h null check;
    if (h->value == valToFind)
    {
        printf("%d found at index %d\n", valToFind, 0);
    }

    struct Node *p = h;
    p = p->next;
    int j = 1;
    while (p != NULL)
    {
        if (p->value == valToFind)
        {
            printf("%d found at index %d\n", valToFind, j);
            return;
        }
        p = p->next;
        j++;
    }

    printf("%d not found\n");
}