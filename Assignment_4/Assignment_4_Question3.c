// Problem Statement : Write a program which accept number from user and print all non-factors of that number.

#include <stdio.h>

void DisplayNonFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;  iCnt <= iNo ; iCnt ++)
    {   
        if((iNo % iCnt) != 0)
        {   
            printf("%d \t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    DisplayNonFactor(iValue);

    return 0;
}