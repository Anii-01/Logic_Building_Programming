#include <stdio.h>

int Max(int iNo)
{
    int iDigit = 0;
    int iMax = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10 ;

        if(iDigit > iMax)
        {
            iMax = iDigit;
        }

        iNo = iNo / 10 ;
    }
    return iMax;
}

int MaxR(int iNo)
{
    int iDigit = 0;
    static int iMax = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10 ;

        if(iDigit > iMax)
        {
            iMax = iDigit;
        }

        iNo = iNo / 10 ;
        MaxR(iNo);
    }
    return iMax;
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    iRet = Max(iValue);
    printf("Maximum digit is : %d ", iRet);

    printf("\n");

    iRet = MaxR(iValue);
    printf("Maximum digit is : %d ", iRet);

    return 0;
}