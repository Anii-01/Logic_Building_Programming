// Accept N numbers from user and accept one another number as NO , check whether NO is present or not.

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[] , int iSize , int iNo)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    int iValue = 0;
    int *ptr = NULL;
    BOOL bRet = FALSE;

    printf("Enter the Count : \n");
    scanf("%d",&iCount);

    printf("Enter the Number which have to check : \n");
    scanf("%d",&iValue);

    ptr = (int *)malloc(iCount * sizeof(int));
    printf("Dynamic memory allocated..\n");

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("Enter %d element : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Check(ptr , iCount , iValue);

    if(bRet == TRUE)
    {
        printf("Number %d is present!",iValue);
    }
    else
    {
        printf("Number %d is not present!",iValue);
    }

    free(ptr);

    return 0;
}