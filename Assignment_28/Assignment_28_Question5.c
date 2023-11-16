// Write a program which accept string from user , reverse that string.

#include <stdio.h>

void Reverse(char *str)
{
    char *end = str;
    int iLength = 0;
    int iCnt = 0;
    char cTemp = '\0';

    while (*end != '\0')
    {
        iLength ++;
        end ++;
    }
    printf("The Length of the String is: %d \n",iLength);

    end--;

    for(iCnt = 0; iCnt < iLength/2 ; iCnt ++)
    {
        cTemp = str[iCnt];
        str[iCnt] = *end;
        *end = cTemp;
        end--;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the String: \n");
    scanf("%[^'\n']s", Arr);

    printf("Before Reversing: %s \n",Arr);

    Reverse(Arr);
    
    printf("After Reversing: %s \n",Arr);
    
    return 0;
}