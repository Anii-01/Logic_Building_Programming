// accept string from user and count number of white spaces .

#include <stdio.h>

int CountWhiteSpace(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount ++;
        }
        str ++;
    }
    return iCount;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhiteSpace(Arr);
    printf("%d",iRet);

    return 0;
}