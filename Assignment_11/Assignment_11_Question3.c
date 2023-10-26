// Write a program which accept number from user and count frequency of 2 in it.

#include <stdio.h>

int CountFrequency(int iNo)
{
    int iDigit = 0;
    int iCntTwo = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 2)
            {
                iCntTwo = iCntTwo+1 ;
            }
        
        iNo = iNo / 10;
    }
    return iCntTwo;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = CountFrequency(iValue);

    printf("Count of 2 is : %d",iRet);
    
    return 0;
}