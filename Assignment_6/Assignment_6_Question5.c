// Problem Statement : Write a program which accept N and print first 5 multiples of N.

#include <stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
   
    for(iCnt = 1 ; iCnt <= 5 ; iCnt++)
    {
        int multi = 0;
        multi = (iCnt*iNo) ;
        printf("%d \t",multi);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}