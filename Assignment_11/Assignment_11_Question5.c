// Write a program which accept number from user and count frequency of such a digits which are less than 6.

#include <stdio.h>

int CountFreqLessThanSix(int iNo)
{
    int iDigit = 0;
    int iCnt2 = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10 ;

        if(iDigit < 6)
        {
           iCnt2 ++;
        }
        iNo = iNo / 10; 
    }
    return iCnt2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = CountFreqLessThanSix(iValue);
    printf("The count of digits which are less than 6 is : %d",iRet);

    return 0;
}
