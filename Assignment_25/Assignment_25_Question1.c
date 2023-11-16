// Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255.

#include <stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("-----------------------------------------------------\n");
    printf("------------------ASCII Table-------------------------\n");
    printf("-----------------------------------------------------\n");

    for(int iCnt = 0; iCnt <= 127 ; iCnt ++)
    {
        printf("\t %c \t %d \t %o \t %x \t \n", iCnt,iCnt,iCnt,iCnt);
    }

    printf("------------------------------------------------------\n"); 
}

int main()
{
    DisplayASCII();

    return 0;
}