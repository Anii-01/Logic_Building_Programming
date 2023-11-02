//Accept N numbers from user , check whether that numbers contains 11 in it or not.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check11(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE;
        }
        
    }
    return false;
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    BOOL bRet = false;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));
    printf("Dynamic memory allocated..\n");

    for(iCnt =0; iCnt < iCount; iCnt++)
    {
        printf("Enter element : %d\t",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Check11(ptr , iCount);

    if(bRet == TRUE)
    {
        printf("11 is Present!");
    }
    else
    {
        printf("11 is not Present!");
    }

    free(ptr);

    return 0;
}