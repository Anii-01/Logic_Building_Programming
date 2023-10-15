//Problem Statement : Accept one number from user and print that number of * on screen

#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt; iCnt<iNo; iCnt++)
    {
        printf("*");
    }

}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}