// accept string from user and display only digits from that string.

#include <stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 48) && (*str <= 57))
        {
            printf("%c",*str);
        }

        str ++;
    }
}

int main()
{
    char Arr[30];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);

    return 0;
}