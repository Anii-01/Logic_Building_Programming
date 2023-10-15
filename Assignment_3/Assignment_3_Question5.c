// Problem statement :  Accept one character from user and check whether that chracter is vowel or not.

#include <stdio.h>
#include <stdbool.h>

bool CheckVowel(char cValue)
{
    if((cValue == 'a') || (cValue == 'e') || (cValue == 'i') || (cValue == 'o') || (cValue == 'u') ||
     (cValue == 'A') || (cValue == 'E') || (cValue == 'I') || (cValue == 'O') || (cValue == 'U'))
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
    
    printf("Enter character: \n");
    scanf("%ch",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}