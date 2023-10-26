// Write a program which accept number from user and return the count of digits in between 3 and 7

#include <stdio.h>

int CountDigits(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    int iDigitCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10 ;

        if((iDigit > 3) && (iDigit < 7))
        {
            iDigitCount ++;
        }

        iNo = iNo /10;
    }
    return iDigitCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Count between 3 and 7 : %d",iRet);

    return 0;
}