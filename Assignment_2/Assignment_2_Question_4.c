// Problem Statement : Accept two numbers from user and display first number in second number of times

#include <stdio.h>

void Display(int iNo , int iFrequency)
{   
    int iCount = 0;

    for(iCount; iCount<iFrequency; iCount++)
    {
        printf("%d",iNo);

    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter first number");
    scanf("%d",&iValue1);

    printf("Enter second number");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;

}
