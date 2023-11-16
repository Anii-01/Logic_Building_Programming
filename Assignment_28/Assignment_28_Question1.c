// Write a program which accept a string from user and accept a character . check wheather that character is present in that string or not.

#include <stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;


BOOL ChkChar(char *str , char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str ++;
    }
    return FALSE;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character which have to find : \n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character is present! \n");
    }
    else
    {
        printf("Character is not present! \n");
    }

    return 0;
}