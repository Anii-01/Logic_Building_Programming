// Problem Statement : Write a program which accept number from user and print its numbers line.

#include <stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    int iCnt = -iNo;
    int iCnt1 = 0; 
   
    for(iCnt1 = iCnt; iCnt1 <= iNo; iCnt1++)
    {
        printf("%d\t",iCnt1);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}