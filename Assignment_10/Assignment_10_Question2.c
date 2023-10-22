// Problem Statement : Write a program which accept range from user and display all even numbers in between that range.


#include <stdio.h>

void RangeDisplayEven(int iNo1 , int iNo2)
{   
    int iCnt = 0;

    for(iCnt = iNo1 ; iCnt <= iNo2 ; iCnt++)
    {
        if(iCnt%2 == 0)
        {
            printf("%d \t",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter range start : ");
    scanf("%d",&iValue1);

    printf("Enter range end : ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}



// Time Complexity :  O(n)