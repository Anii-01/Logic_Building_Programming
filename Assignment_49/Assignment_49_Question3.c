#include <stdio.h>

int StrlenX(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt ++ ;
        *str ++ ;
    }
    return iCnt ;
}

int StrlenXR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt ++ ;
        str ++ ;
        StrlenXR(str);
    }
    return iCnt ;
}


int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string ");
    scanf("%s",arr);

    iRet = StrlenX(arr);
    printf("%d",iRet);

    printf("\n");

    iRet = StrlenX(arr);
    printf("%d",iRet);
    
    return 0;
}