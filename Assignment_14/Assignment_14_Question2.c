// Accept N numbers from user and return difference between frequency of even numbers and odd numbers.

#include <stdio.h>
#include <stdlib.h>

int DifferenceEvenOdd(int Arr[] , int iSize)
{
    int iEvenCount = 0;
    int iOddCount = 0;
    int iCnt = 0;
    for(iCnt = 0 ; iCnt <iSize ; iCnt++)
    {
        if((Arr[iCnt] %2 == 0))
        {
            iEvenCount ++;
        }
        else
        {
            iOddCount ++;
        }
    }
    printf("Even count is : %d \n",iEvenCount);
    printf("Odd count is : %d \n",iOddCount);
    return (iEvenCount - iOddCount);
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

    iRet = DifferenceEvenOdd(ptr,iCount);
    printf("%d",iRet);

    free(ptr);

    return 0;
}