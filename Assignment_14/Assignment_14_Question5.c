// Accept N numbers from user and Accept one another number as NO, return frequency of NO form it.

#include <stdio.h>
#include <stdlib.h>

int CountFrequency(int Arr[] , int iSize , int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;
    
    for(iCnt = 0 ; iCnt <iSize ; iCnt++)
    {
        if((Arr[iCnt] == iNo))
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
    int iValue = 0;

    printf("Enter the Count : ");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));
    printf("Dynamic memory allocated..\n");

    printf("Enter the number whose frequency is calculated: ");
    scanf("%d",&iValue);

    for(iCnt = 0; iCnt <iCount; iCnt++)
    {
        printf("Enter number %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = CountFrequency(ptr,iCount,iValue);
    printf("%d",iRet);

    free(ptr);

    return 0;
}