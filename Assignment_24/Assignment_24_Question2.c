// Accept Character from user and check whether it is capital or not (A-Z)

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if(ch <= 96 && ch >= 65)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character : \n");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital letter!");
    }
    else
    {
        printf("It is not a Capital letter!");
    }

    return 0;
}