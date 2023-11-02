// Accept N numbers from user and return the difference between largest and smallest number.

#include <stdio.h>
#include <stdlib.h>

int FindDiffer(int Arr[] , int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];
    int iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt ++ )
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return (iMax - iMin);
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
        printf("Unable to allocate memory\n");
        return -1;
    }

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("Enter the %d element : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = FindDiffer(ptr , iCount);
    printf("The difference between largest and smallest number is: %d",iRet);


    free(ptr);

    return 0;
}