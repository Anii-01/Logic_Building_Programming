// Accept N numbers from user and return product of all odd elements.

#include <stdio.h>
#include <stdlib.h>

int OddProduct(int Arr[] , int iSize)
{
    int iProduct = 1;
    int iCnt = 0;
    int iHasOdd = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] %2 != 0)
        {
            iProduct = iProduct * Arr[iCnt];
            iHasOdd = 1;
        }
    }
    if(iHasOdd == 1)
    {
        return iProduct;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;
  
    printf("Enter the Count : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));
    printf("Dynamic memory allocated..\n");

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("Enter %d element : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = OddProduct(ptr , iCount);
    printf("Product is: %d",iRet);

    free(ptr);

    return 0;
}