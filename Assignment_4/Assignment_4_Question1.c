// Problem Statement : Write a program which accept number from user and display its multiplication of factors.

#include <stdio.h>

int MultiFact(int iNo)
{
    int iCnt = 0;
    int iProduct = 1;

    for(iCnt=1 ; iCnt <= iNo/2 ; iCnt++)
    {
        if((iNo % iCnt) == 0 )
        {
            iProduct = iProduct * iCnt;
        }
    }
    return iProduct;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);
    printf("%d",iRet);
    
    return 0;
}