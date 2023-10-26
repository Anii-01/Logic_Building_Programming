// Write a program which accept number from user and return multiplication of all digits

#include <stdio.h>

int DigitsMultiplication(int iNo)
{
    int iDigit = 0;
    int iMulti = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;  
        if(iDigit == 0){
            continue;
        }
        iMulti = iMulti * iDigit; 
    }
    return iMulti;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = DigitsMultiplication(iValue);

    printf("Multiplication of all digits : %d",iRet);
    
    return 0;
}