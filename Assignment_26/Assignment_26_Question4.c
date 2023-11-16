// Write a program which accept string from user and check whether it contains vowels in it or not.

#include <Stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowels(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') || (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            return TRUE;
        }
        
        str++;
    }
    return FALSE;
}

int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowels(Arr);

    if(bRet == TRUE)
    {
        printf("Vowels are present!");
    }
    else
    {
        printf("Vowels are not present!");
    }

    return 0;
}