#include <stdio.h>
#include <malloc.h>

void create()
{
    int numberOfNodes;
    printf("Enter no of nodes to create - ");
    scanf("%d", &numberOfNodes);
    struct Node *p;
    for (int i = 0; i < numberOfNodes; i++)
    {
        struct Node *newNode = malloc(sizeof(struct Node));
        printf("Enter value - ");
        scanf("%d", &newNode->value);
        newNode->next = NULL;
        if (h == NULL)
        {
            h = newNode;
            p = h;
        }
        else
        {
            p->next = newNode;
            p = p->next;
        }
    }
}
