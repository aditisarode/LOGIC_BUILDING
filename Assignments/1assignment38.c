#include <stdio.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node* next;

};

typedef struct node NODE;
typedef struct node* PNODE;

bool Search(PNODE head, int iNo)
{
    while(head != NULL)
    {
        if(head->data == iNo)
        {
            return true;
        }

        head = head->next;
    }

    return false;
}