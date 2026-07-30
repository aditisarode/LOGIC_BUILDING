#include <stdio.h>

struct node
{
    int data;
    struct node* next;

};

typedef struct node NODE;
typedef struct node* PNODE;

void DisplayEven(PNODE head)
{
    while(head != NULL)
    {
        if((head->data % 2) == 0)
        {
            printf("%d ", head->data);
        }

        head = head->next;
    }
}