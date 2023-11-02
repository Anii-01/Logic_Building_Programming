//Accept N numbers from user and display all such elements which are divisible by 5;

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt =0;

    for(iCnt = 0; iCnt < iSize ; iCnt ++)
    {
        if((Arr[iCnt] % 5)==0 )
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

    printf("Enter how many elements : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));
    printf("Dynamic memory allocated...\n");

    for(iCnt=0; iCnt <iCount ; iCnt++)
    {
        printf("Enter %d element : ",iCnt+1);
        scanf("%d", &ptr[iCnt]);
    }

    Display(ptr,iCount);

    free(ptr);

    return 0;
}