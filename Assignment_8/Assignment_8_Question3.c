// Problem Statement : Write a program to find even factorial of given number.

#include <stdio.h>

int EvenFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }

    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt<=iNo ; iCnt++)
    {
        if((iCnt % 2)==0)
        {
            iFact = iFact*iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);
    printf("Even Fcatorial of number is : %d",iRet);

    return 0;
}

// Time Complexity is : O(n)