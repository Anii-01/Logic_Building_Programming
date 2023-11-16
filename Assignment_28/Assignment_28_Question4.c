// Write a program which accept a string from user and accept a character . Return index of last occurance of that character.

#include <stdio.h>

int LastOccur(char *str , char ch)
{
    int iCnt = 0;
    int index = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            index = iCnt;
        }
        iCnt ++;
        str ++;
    }
    if(index == 0)
    {
        return -1;
    }
    return index;
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

    iRet = LastOccur(Arr, cValue);
    printf("The Last Occurance of char is at index : %d \n",iRet);

    return 0;
}