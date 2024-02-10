#include <stdio.h>

int Fact(int iNo)
{
    if(iNo == 0)
    {
        return 1;
    }

    int iFact = 1;
    int iCnt = 1;

    while(iCnt <= iNo)
    {
        iFact = iFact * iCnt ;
        iCnt ++ ;
    }
    return iFact;
}

int FactR(int iNo)
{
    static int iFact = 1;
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        iFact = iFact * iCnt ;
        iCnt ++ ;
        FactR(iNo);
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Fact(iValue);
    printf("Factorial is : %d",iRet);

    printf("\n");

    iRet = FactR(iValue);
    printf("Factorial is : %d",iRet);

    return 0;
}