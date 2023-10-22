// Write a program which accept area in square feet and convert it into square meter.

#include <stdio.h>

double SquareMeter(int iSquarefeet)
{
    double dSqmeter = 0.0;
    dSqmeter = (iSquarefeet * 0.0929) ;
    return dSqmeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("The value in Square meter is : %fl",dRet);

    return 0;
}