// Accept N numbers from user and display all such elements which are multiples of 11.

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iCount)
{
    int iCnt =0;
    for(iCnt = 0; iCnt < iCount ; iCnt++)
    {
        if((Arr[iCnt] % 11) == 0)
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

    printf("Enter number of elements: ");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * (sizeof(int)));
    printf("Dynamic memory allocated..\n");

    for(iCnt = 0; iCnt<iCount ; iCnt ++)
    {
        printf("Enter %d  number :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr , iCount);

    free(ptr);

    return 0;
}