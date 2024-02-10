#include <stdio.h>

int Small(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >='a') && (*str <= 'z'))
        {
            iCnt ++ ;
        }
        str ++ ;
    }
    return iCnt;
}

int SmallR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if((*str >='a') && (*str <= 'z'))
        {
            iCnt ++ ;
        }
        str ++ ;
        SmallR(str);
    }
    return iCnt;
}


int main()
{
    int iRet = 0;
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Small(Arr);
    printf("Count of small characters are : %d ", iRet);

    printf("\n");

    iRet = SmallR(Arr);
    printf("Count of small characters are : %d ", iRet);

    return 0;
}