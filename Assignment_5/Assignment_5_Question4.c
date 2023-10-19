//Problem Statement: Write a program which accept three numbers and print its multiplication.

#include <stdio.h>

int CalMulti(int iNo1 , int iNo2 , int iNo3)
{
    if(iNo1 || iNo2 || iNo3 == 0)
    {
        return 0;
    }
    
    int iProduct = 0;
    iProduct = (iNo1 * iNo2 * iNo3);
    return iProduct;
}

int main()
{
    int iValue1 , iValue2 , iValue3 = 0 ;
    int iRet = 0;

    printf("Enter three numbers : \n");
    scanf("%d  %d  %d", &iValue1,&iValue2,&iValue3);

    iRet = CalMulti(iValue1,iValue2,iValue3);

    printf("Multiplication is : %d",iRet);

    return 0;
}