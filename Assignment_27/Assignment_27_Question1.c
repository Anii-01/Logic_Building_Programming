// Accept string from user and convert it into lower case.

#include <stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if((*str <= 'Z') && (*str >= 'A'))
        {
            *str = *str + 32;
        }

        str ++;
    }
}

int main()
{
    char arr[20];

    printf("Enter the String : ");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified string is : %s", arr);

    return 0;
}