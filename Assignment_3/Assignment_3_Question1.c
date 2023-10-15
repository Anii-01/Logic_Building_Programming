// Problem Statement : Write a program which accept one number from user and print that number of even numbers on screen.

#include <stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return ;
    }
    
    int iCnt1 = 0;
    int iCnt2 = 0;

    for(iCnt1 = 1 ; iCnt2 < iNo ; iCnt1 ++)
    {
        if(iCnt1 % 2 == 0)
        {
            printf("%d \n",iCnt1);
            iCnt2++; 
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter how many even number you want to print on screen:");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}