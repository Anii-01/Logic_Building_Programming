
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

int Maximum(PNODE Head)
{
    int iMax = 0;
    while(Head != NULL)
    {
        if(iMax < Head-> Data) iMax = Head-> Data;
        Head = Head-> Next;
    }
    return iMax;
}

int main()
{
    int iRet = 0;

    PNODE First = NULL;

    InsertFirst(&First, 110);
    InsertFirst(&First, 230);
    InsertFirst(&First, 320);
    InsertFirst(&First, 240);

    iRet = Maximum(First);
    printf("Largest element in SLLL: %d", iRet);

    return 0;
}