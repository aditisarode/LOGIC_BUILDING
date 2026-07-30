#include <stdio.h>

struct node
{
    int data;
    struct node* next;

};

typedef struct node NODE;
typedef struct node* PNODE;

int Frequency(PNODE head, int iNo)
{
    int iCount = 0;

    while(head != NULL)
    {
        if(head->data == iNo)
        {
            iCount++;
        }

        head = head->next;
    }

    return iCount;
}