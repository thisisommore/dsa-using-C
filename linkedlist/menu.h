#include <stdio.h>
#include <stdlib.h>

void menu()
{
    while (1)
    {
        enum Method
        {
            InsertAtBeg,
            InsertAtEnd,
            InsertAfterNode,
            DeleteAtBeg,
            DeleteAtEnd,
            Search,
            Exit
        };
        printf("\n===================\n"
               "0. Insert at Begineening\n"
               "1. Insert at End\n"
               "2. Insert after Node\n"
               "3. Delete at Begineening\n"
               "4. Delete at End\n"
               "5. Search\n"
               "6. Exit \n");
        int option = 0;
        scanf("%d", &option);
        switch (option)
        {
        case InsertAtBeg:
            insertAtBeg();
            print();
            break;
        case InsertAtEnd:
            insertAtEnd();
            print();
            break;

        case InsertAfterNode:
            insertAfterNode();
            print();
            break;

        case DeleteAtBeg:
            deleteAtBeg();
            print();
            break;

        case DeleteAtEnd:
            deleteAtEnd();
            print();
            break;

        case Search:
            search();
            print();
            break;

        case Exit:
            printf("bye bye\n");
            return;

        default:
            printf("Invalid option\n");
            break;
        }
    }
}