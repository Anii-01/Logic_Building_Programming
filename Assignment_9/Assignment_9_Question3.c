// Write a program which accept distance in kilometre and convert it into meter.

#include <stdio.h>

int KMtoMeter(int iNo)
{
    if(iNo < 0)
    {
        printf("Distance never be negative. ");
        return 0;
    }
    int iMetre = 0;
    
    iMetre = iNo*1000;

    return iMetre;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d",iRet);
    
    return 0;
}