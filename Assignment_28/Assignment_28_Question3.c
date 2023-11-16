// Write a program which accept a string from user and accept a character . Return index of first occurance of that character.

#include <stdio.h>

int FirstOccur(char *str , char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCnt;
        }
        iCnt ++;
        str ++;
    }
    return -1;
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

    iRet = FirstOccur(Arr, cValue);
    printf("The first Occurance of char is at index : %d \n",iRet);

    return 0;
}