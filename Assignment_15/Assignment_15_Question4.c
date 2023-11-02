// Accept N numbers from user and accept Range , Display all elements from that range.

#include <stdio.h>
#include <stdlib.h>

void DisplayRange(int Arr[] , int iSize , int iNo1 , int iNo2 )
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize; iCnt ++)
    {
        if((Arr[iCnt] > iNo1) && (Arr[iCnt] < iNo2))
        {
            printf("%d \t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    int iStart = 0;
    int iEnd = 0;
    int *ptr = NULL;

    printf("Enter the Count: \n");
    scanf("%d",&iCount);

    ptr = malloc(iCount * sizeof(int));
    printf("Dynamic memory allocated..\n");

    printf("Enter the starting point: \n");
    scanf("%d",&iStart);

    printf("Enter the ending point: \n");
    scanf("%d",&iEnd);

    for(iCnt = 0 ; iCnt < iCount ; iCnt++)
    {   
        printf("Enter %d element :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    
    DisplayRange(ptr , iCount , iStart , iEnd);
    

    free(ptr);

    return 0;
}

