// Accept N numbers from user and accept one another number as NO , return index of last occurrence of that NO.

#include <stdio.h>
#include <stdlib.h>

int LastOccurance(int Arr[] , int iSize , int iNo)
{
    int iCnt = 0;

    for(iCnt = iSize-1 ; iCnt >= 0 ; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
        return -1;
}

// 2nd Approach

int LastOccurance2(int Arr[] , int iSize , int iNo)
{
    int iCnt = 0;
    int iLastOccur = -1;

    for(iCnt = 0 ; iCnt <= iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iLastOccur = iCnt;
        }
    }
    return iLastOccur;
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    int iValue = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the Count: \n");
    scanf("%d",&iCount);

    ptr = malloc(iCount * sizeof(int));
    printf("Dynamic memory allocated..\n");

    printf("Enter the Element which have to find: \n");
    scanf("%d",&iValue);

    for(iCnt = 0 ; iCnt < iCount ; iCnt++)
    {   
        printf("Enter %d element :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    
    //iRet = LastOccurance(ptr , iCount , iValue);
    iRet = LastOccurance2(ptr , iCount , iValue);
   

    if(iRet == -1)
    {
        printf("Number is not present.");
    }
    else
    {
        printf("index of last Occurance of %d is at %d",iValue,iRet);
    }

    free(ptr);

    return 0;
}

