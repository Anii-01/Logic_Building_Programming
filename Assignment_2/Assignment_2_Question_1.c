// Problem Statement : Accept one number from user and print that number of * on screen

#include<stdio.h>

void Display(int iNo)
{
    int iCount = 0;
    for(iCount; iCount<iNo; iCount++)
    {
        printf(" * ");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
