// Problem Statement : Write a program which accept number from user and display its table in reverse order.

#include <stdio.h>

void DisplayTable(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int iMulti = 0;

    for(iCnt = 10; iCnt >= 1 ; iCnt --)
    {   
        iMulti = iCnt*iNo;
        printf("%d\t",iMulti);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}