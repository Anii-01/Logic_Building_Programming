// Problem Statement : Accept one character from user and convert case of that character.

#include <stdio.h>

void DisplayConvert(char cValue)
{
    if((cValue <= 90) && (cValue >= 65) )
    {
        cValue = cValue + 32 ;
        printf("%c",cValue);
    }
    else if((cValue <= 122) && (cValue >= 90))
    {   
        cValue = cValue - 32 ;
        printf("%c",cValue);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter character : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}