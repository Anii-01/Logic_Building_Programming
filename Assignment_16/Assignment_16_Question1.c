// Accept N numbers from user and return the largest number.

#include <stdio.h>
#include <stdlib.h>

int FindLargest(int Arr[] , int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt ++ )
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the number of Elements: \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * (sizeof(int)));
    printf("Dynamic memory allocated sucessfully..\n");

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("Enter the %d element : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = FindLargest(ptr , iCount);
    printf("The largest number is : %d",iRet);


    free(ptr);

    return 0;
}