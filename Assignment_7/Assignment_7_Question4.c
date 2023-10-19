// Problem Statement : Write a program which accept number from user and display its table.

#include <stdio.h>

void DisplayTable(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 10 ; iCnt ++)
    {   

        printf("%d\t",iCnt*iNo);
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