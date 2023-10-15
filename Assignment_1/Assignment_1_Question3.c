// Problem Statement : Program to print 5 to 1 numbers on screen

#include<stdio.h>
int Display()
{
    int i = 0;
    int count = 5;
    for( i = 1 ; i <= count ; i++)
    {
        printf("%d\n",i);
    }
}

int main()
{
    Display();

    return 0;
}