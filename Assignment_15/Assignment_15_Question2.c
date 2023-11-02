// Accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO.

#include <stdio.h>
#include <stdlib.h>

int Check(int Arr[] , int iSize , int iNo)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
    return -1;
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    int iValue = 0;
    int *ptr = NULL;
    int iRet = 0;

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
    printf("\n");
    
    iRet = Check(ptr , iCount , iValue);

    if(iRet == -1)
    {
        printf("Number not present!");
    }
    else
    {
        printf("index of first Occurance of %d is at %d: ",iValue,iRet);
    }

    free(ptr);

    return 0;
}