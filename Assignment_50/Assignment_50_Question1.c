#include <stdio.h>

int WhiteSpace(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt ++ ;
        }

        str ++ ;
    }
    return iCnt;
}

int WhiteSpaceR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt ++ ;
        }
        str ++ ;
        WhiteSpaceR(str);
    }
    return iCnt;
}


int main()
{
    int iRet = 0;
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = WhiteSpace(Arr);
    printf("Count of whiteSpaces are : %d ", iRet);

    printf("\n");

    iRet = WhiteSpaceR(Arr);
    printf("Count of whiteSpaces are : %d ", iRet);

    return 0;
}