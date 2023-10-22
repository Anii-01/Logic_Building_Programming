// Problem Statement : Write a program which accept range from user and display all numbers in between that range in reverse order.

#include <stdio.h>

void DisplayRangeReverse(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart <= iEnd)
    {
        for(iCnt = iEnd ; iCnt >= iStart ; iCnt --)
            {
                printf("%d \t",iCnt);
            }
    }

    else
    {
        printf("Invalid range \n"); 
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter start of range :");
    scanf("%d",&iValue1);

    printf("Enter end of range :");
    scanf("%d",&iValue2);

    DisplayRangeReverse(iValue1,iValue2);
    
    return 0;
}


// Time Complexity :  O(n)