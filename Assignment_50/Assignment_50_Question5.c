#include <stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10 ;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10 ;
    }
    return iRev;
}

int ReverseR(int iNo)
{
    int iDigit = 0;
    static int iRev = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10 ;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10 ;
        ReverseR(iNo);
    }
    return iRev;
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    iRet = Reverse(iValue);
    printf("Reverse number is : %d ", iRet);

    printf("\n");

    iRet = ReverseR(iValue);
    printf("Reverse number is : %d ", iRet);

    return 0;
}