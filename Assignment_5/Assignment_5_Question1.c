// Problem Statement : Write a program which accept name from user and print that name.

#include <stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name:");

    scanf("%[^\n]",Name);
    //The format specifier "%[^\n]" tells to the compiler that read the characters until "\n" is not found.
    
    //fgets(Name,sizeof(Name),stdin);
   
    printf("Your name is: %s",Name);
    //puts(Name);
   
    return 0;

}