// Accept string from user and toggle the case.

#include <stdio.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if((*str <= 'z') && (*str >= 'a'))
        {
            *str = *str - 32;
        }

        else if((*str <= 'Z') && (*str >= 'A'))
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

    strtogglex(arr);

    printf("Modified string is : %s", arr);

    return 0;
}