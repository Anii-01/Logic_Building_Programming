// Accept N numbers from user and display summation of digits of each number.

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[] , int iSize)
{
    int iCnt = 0;
  
    for(iCnt = 0 ; iCnt < iSize ; iCnt ++)
    {
        int iCount = 0;
        int iDigit = 0;
        int iSum = 0;
        while(Arr[iCnt] !=0 )
        {
            iDigit = Arr[iCnt] % 10;
            Arr[iCnt] = Arr[iCnt] / 10;
            iSum = iSum + iDigit;
        }
        printf("%d\t",iSum);
    }
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    int *ptr = NULL;

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
    
    Display(ptr , iCount);

    free(ptr);

    return 0;
}