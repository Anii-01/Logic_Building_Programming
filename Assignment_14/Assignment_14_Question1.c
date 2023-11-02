// Accept N numbers from user and return frequency of even numbers.

#include <stdio.h>
#include <stdlib.h>

int CountEven(int Arr[] , int iSize)
{
    int iEvenCount = 0;
    int iCnt = 0;
    for(iCnt = 0 ; iCnt <iSize ; iCnt++)
    {
        if((Arr[iCnt] %2 == 0))
        {
            iEvenCount ++;
        }
    }
    return iEvenCount;
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

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    for(iCnt = 0; iCnt <iCount; iCnt++)
    {
        printf("Enter number %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = CountEven(ptr,iCount);
    printf("%d",iRet);

    free(ptr);

    return 0;
}