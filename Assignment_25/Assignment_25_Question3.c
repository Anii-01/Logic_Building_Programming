// Accept character from user. If character is capital then display all the characters from the input characters till Z. If input character is small then print all the character in reverse order till a. In other cases return directly.

#include <stdio.h>

void Display(char ch)
{
    int iCnt = 0;

    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(iCnt = ch ; iCnt <= 'Z' ; iCnt ++)
        {
            printf("%c\t",ch);
            ch++;
        }
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(iCnt = ch ; iCnt >= 'a'; iCnt --)
        {
            printf("%c\t",ch);
            ch--;
        }
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}