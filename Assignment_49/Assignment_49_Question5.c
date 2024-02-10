#include <stdio.h>

int Mult(int iNo)
{
    if(iNo == 0)
    {
        return 0;
    }

    int iDigit = 0;
    int iProduct = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10 ;
        iProduct = iProduct * iDigit;
        iNo = iNo / 10 ;
    }
    return iProduct;
}

int MultR(int iNo)
{
    static int iProduct = 1;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10 ;
        iProduct = iProduct * iDigit ;
        iNo = iNo / 10 ;
        MultR(iNo);
    }
    return iProduct;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Mult(iValue);
    printf("Product is : %d",iRet);

    printf("\n");

    iRet = MultR(iValue);
    printf("Product is : %d",iRet);

    return 0;
}