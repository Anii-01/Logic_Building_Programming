// Write a program which accept number from user and count frequancy of 4 in it

#include <stdio.h>

int CountFour(int iNo)
{
    int iFour_Cnt = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 4)
        {
            iFour_Cnt ++;
        }
        iNo = iNo / 10;
    }
    return iFour_Cnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);
    printf("Count of 4 is : %d",iRet);

    return 0;
}