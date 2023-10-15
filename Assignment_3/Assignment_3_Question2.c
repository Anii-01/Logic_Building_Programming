// Problem Statement : Write a program which accept number from user and print factors of that number.

#include <stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2;  iCnt <= iNo/2 ; iCnt ++)
    {   
        if((iNo % iCnt) == 0)
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

    DisplayFactor(iValue);

    return 0;

}