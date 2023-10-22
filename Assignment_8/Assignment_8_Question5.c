// Problem Statement : Write a program which returns difference between Even factorial and odd factorial.

#include <stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    int FactorialDiff = 0;

    for(iCnt = 1; iCnt <= iNo ; iCnt ++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }
    printf("Even factorial is : %d\n",iEvenFact);
    printf("Odd factorial is : %d\n",iOddFact);
    FactorialDiff = iEvenFact - iOddFact;
    return FactorialDiff;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}



// Time Complexity is : O(n)