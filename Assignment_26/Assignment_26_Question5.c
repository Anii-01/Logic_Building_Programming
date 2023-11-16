//Accept string from user and display it in reverse order!

#include <stdio.h>

void ReverseString(char *str)
{
    int iLength = 0;
    int iCnt = 0;
    char temp = '\0';
    char *end = str;

    while (*end != '\0')
    {
        iLength++;
        end++;
    }

    printf("Length of string is: %d \n", iLength);

    end--;

    for (iCnt = 0; iCnt < iLength / 2; iCnt++)
    {
        temp = str[iCnt];
        str[iCnt] = *end;
        *end = temp;
        end--;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Before Reversing :%s \n",Arr);
    ReverseString(Arr);

    printf("After Reversing : %s \n",Arr);


    return 0;
}