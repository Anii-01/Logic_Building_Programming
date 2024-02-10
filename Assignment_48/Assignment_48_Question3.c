#include <stdio.h>

void Display(int iNo)
{
    int iCnt = iNo;

    while(iCnt >= 1)
    {
        printf("%d\t",iCnt);
        iCnt -- ;
    }
}

void DisplayR(int iNo)
{
    if(iNo >= 1)
    {
        printf("%d\t",iNo);
        DisplayR(iNo-1);
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