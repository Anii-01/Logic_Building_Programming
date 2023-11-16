// Write a program which accept string from user and count number of capital characters.

#include <stdio.h>

int CountCapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount ++;
        }
        str ++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String: \n");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("No. of capital letters are: %d",iRet);

    return 0;
}