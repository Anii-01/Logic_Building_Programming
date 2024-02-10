#include <stdio.h>

int Sum(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10 ;
        iSum = iSum + iDigit;
        iNo = iNo / 10 ;
    }
    return iSum;
}

int SumR(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10 ;
        iSum = iSum + iDigit ;
        iNo = iNo / 10 ;
        SumR(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Sum(iValue);
    printf("Sum is : %d",iRet);

    printf("\n");

    iRet = SumR(iValue);
    printf("Sum is : %d",iRet);

    return 0;
}