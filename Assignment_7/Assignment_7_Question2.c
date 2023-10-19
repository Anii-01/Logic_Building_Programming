// Problem statement : Accept single digit from user and print it into word; 

#include <stdio.h>

void DisplayWord(int iNo)
{
    if(iNo<0)
    {
         iNo = -iNo;
    }
   
    if(iNo > 9)
    {
        printf("Invalid Number");
        return;
    }
    switch(iNo)
    {
        case 1: printf("one");
                break;
        case 2: printf("two");
                break;
        case 3: printf("three");
                break;
        case 4: printf("four");
                break;
        case 5: printf("five");
                break;
        case 6: printf("six");
                break;
        case 7: printf("seven");
                break;
        case 8: printf("eight");
                break;
        case 9: printf("nine");
                break;
        
        default : printf("Invalid Number");
}
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    DisplayWord(iValue);

    return 0;
}