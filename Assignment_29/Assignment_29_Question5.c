
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    struct node * Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn-> Next = NULL;
    newn-> Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn-> Next = *Head;
        *Head = newn;
    }
}

int Minimum(PNODE Head)
{
    int iMin = 0;
    while(Head != NULL)
    {
        if(iMin < Head-> Data) iMin = Head-> Data;
        Head = Head-> Next;
    }
    return iMin;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    return 0;
}