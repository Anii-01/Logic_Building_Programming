// Write a program which accept number from user and return difference between summation of even digits and summation of odd digits


#include <stdio.h>

int CountDiffer(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10 ;
        iNo = iNo / 10;

        if((iDigit % 2)==0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }
    }
    printf("Even sum is : %d \n",iEvenSum);
    printf("Odd sum is : %d \n",iOddSum);
    return (iEvenSum - iOddSum);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountDiffer(iValue);
    printf("The Difference is : %d",iRet);
    return 0;
}
