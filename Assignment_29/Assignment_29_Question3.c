
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

int Addition(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt = iCnt + Head-> Data;
        Head = Head -> Next;
    }
    return iCnt;
}

int main()
{
    int iRet = 0;

    PNODE First = NULL;

    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    iRet = Addition(First);
    printf("Addition of elements in SLLL: %d", iRet);

    return 0;
}