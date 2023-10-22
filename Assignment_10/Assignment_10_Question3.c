// Write a program which accept range from user and return addition of all numbers in between that range. (Range should contains positive numbers only)

#include <stdio.h>

int RangeSum(int iStart , int iEnd)
{
    if((iStart < 0) || (iEnd < 0))
    {
        printf("Invalid range \n");
        return 0;
    }

    else if(iStart <= iEnd)
    {
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = iStart ; iCnt <= iEnd ; iCnt ++)
    {
        iSum = iSum + iCnt;
    }
        return iSum;    
    }

    else
    {
        printf("Invalid range \n");
        return 0;       
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter start of range : ");
    scanf("%d",&iValue1);

    printf("Enter end of range : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);
    
    printf("The Addition is : %d",iRet);

    return 0;
}



// Time Complexity :  O(n)