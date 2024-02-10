// Write a Recursive program which displays follwing pattern 
// 5
// * * * * *

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("*\t");
        iCnt ++ ;
    }
}

void DisplayR(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("*\t");
        iCnt ++ ;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number : ");
    scanf("%d",&iValue);
    Display(iValue);
    printf("\n");
    DisplayR(iValue);

    return 0;
}