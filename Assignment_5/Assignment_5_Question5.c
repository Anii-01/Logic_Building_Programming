// Problem Statement : Write a program which accept total marks & obtained marks from user and calculate percentage.

#include <stdio.h>

float CalculatePercentage(float iGet , float iTotal )
{
    if(iTotal==0)
    {
        printf("Total marks never be zero.\n");
        return 0.0;
    }

    float fPercentage = 0.0f;
    fPercentage = (iGet / iTotal)*100;
    return fPercentage;
}
int main()
{
    int iValue1 , iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter the total marks : \n");
    scanf("%d",&iValue1);
    printf("Enter the obtained marks : \n");
    scanf("%d",&iValue2);

    fRet = CalculatePercentage(iValue2,iValue1);
    printf("Percentage is : %f ",fRet);

    return 0;
}