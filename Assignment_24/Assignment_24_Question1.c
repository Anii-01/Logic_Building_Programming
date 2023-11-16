// Accept Character from user and check whether it is alphabet or not
//(A-Z a-z).

#include <stdio.h>
#include <stdbool.h>

bool ChkAlpha(char ch)
{
    if((ch >= 65) && (ch <= 122))
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It is a Alphabet!");
    }
    else
    {
        printf("It is not a Alphabet!");
    }

    return 0;
}
