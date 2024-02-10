#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 1;
    char ch = 'A';

    while(iCnt <= iNo)
    {
        printf("%c\t",ch);
        iCnt ++ ;
        ch ++ ;
    }
}

void DisplayR(int iNo)
{
    static int iCnt = 1;
    static char Ch = 'A';

    if(iCnt <= iNo)
    {
        printf("%c\t",Ch);
        iCnt ++ ;
        Ch ++ ;
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