// Accept N numbers from user and display all such numbers which contains 3 digits in it.

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[] , int iSize)
{
    int iCnt = 0;
  
    for(iCnt = 0 ; iCnt < iSize ; iCnt ++)
    {
        int iCount = 0;
        int iTemp = Arr[iCnt];
        while(iTemp !=0 )
        {
            iTemp = iTemp / 10;
            iCount ++;
        }
        if(iCount == 3)
        {
            printf("%d\t",Arr[iCnt]);
        }
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