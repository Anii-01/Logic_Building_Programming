#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 1;
    char ch = 'a';

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
    static char ch = 'a';

    while(iCnt <= iNo)
    {
        printf("%c\t",ch);
        iCnt ++ ;
        ch ++ ;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter value : ");
    scanf("%d",&iValue);

    Display(iValue);
    printf("\n");
    DisplayR(iValue);

    return 0;
}