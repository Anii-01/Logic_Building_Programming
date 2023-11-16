// Write a program which accept a string from user and accept a character . Return frequency of that character.

#include <stdio.h>

int Frequency(char *str , char ch)
{
    int iFrequency = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iFrequency ++;
        }
        str ++;
    }
    return iFrequency;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character which have to find : \n");
    scanf(" %c",&cValue);

    iRet = Frequency(Arr, cValue);
    printf("The frequency of char is : %d \n",iRet);

    return 0;
}