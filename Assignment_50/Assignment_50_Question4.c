#include <stdio.h>

int Min(int iNo)
{
    int iDigit = 0;
    int iMin = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10 ;

        if(iDigit < iMin)
        {
            iMin = iDigit;
        }

        iNo = iNo / 10 ;
    }
    return iMin;
}

int MinR(int iNo)
{
    int iDigit = 0;
    static int iMin = 9;

    if(iNo != 0)
    {
        iDigit = iNo % 10 ;

        if(iDigit < iMin)
        {
            iMin = iDigit;
        }

        iNo = iNo / 10 ;
        MinR(iNo);
    }
    return iMin;
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    iRet = Min(iValue);
    printf("Minimum digit is : %d ", iRet);

    printf("\n");

    iRet = MinR(iValue);
    printf("Minimum digit is : %d ", iRet);

    return 0;
}