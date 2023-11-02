// Accept N numbers from user and return frequency of 11 form it.

#include <stdio.h>
#include <stdlib.h>

int CountFrequency11(int Arr[] , int iSize)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0 ; iCnt <iSize ; iCnt++)
    {
        if((Arr[iCnt] == 11))
        {
            iFrequency ++;
        }
    }
    return iFrequency;
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the Count : ");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));
    printf("Dynamic memory allocated..\n");

    for(iCnt = 0; iCnt <iCount; iCnt++)
    {
        printf("Enter number %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = CountFrequency11(ptr,iCount);
    printf("%d",iRet);

    free(ptr);

    return 0;
}