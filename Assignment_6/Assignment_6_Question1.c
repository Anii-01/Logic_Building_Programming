// Write a program which accept number from user and print that number of $ & * on screen.

#include <stdio.h>

void DisplayPattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("$\t*\t");
    }
}
int main()
{
    int iValue = 0;

    printf("How many times you have to print: \n");
    scanf("%d",&iValue);

    DisplayPattern(iValue);

    return 0;
}