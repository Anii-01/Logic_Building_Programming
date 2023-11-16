// Accept character from user. If character is small display its corresponding capital character, and if it capital then display its corresponding small. In other cases display as it is.

#include <stdio.h>

void Display(char ch)
{
    char cResult = '\0';

    if((ch >= 'A') && (ch <= 'Z'))
    {
        cResult = ch + 32;
        printf("%c",cResult);
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        cResult = ch - 32;
        printf("%c",cResult);
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '\n';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}