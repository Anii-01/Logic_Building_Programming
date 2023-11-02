// Accept N numbers from user and return difference between summation of even and odd numbers.

#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[] , int iSize)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;
    int iDifference = 0;

    for(iCnt=0 ; iCnt < iSize ; iCnt++)
    {
        if((Arr[iCnt] %2) == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    printf("EvenSum : %d\nOddSum : %d \n",iEvenSum,iOddSum);
    iDifference = iEvenSum - iOddSum ;
    
    return iDifference;
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the Count : ");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount*(sizeof(int)));
    printf("Dynamic memory allocated...\n\n");

    if(ptr == NULL)
    {
        printf("Unable to allocate memory \n");
        return -1;
    }

    for(iCnt = 0; iCnt < iCount ;iCnt ++)
    {
        printf("Enter %d element: ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    printf("\n");

    iRet = Difference(ptr , iCount);
    printf("The difference is : %d \n",iRet);

    free(ptr);

    return 0;
}