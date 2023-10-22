// Write a program which accept temperature in fahrenheit and convert in into celsius.

#include <stdio.h>

double FhtoCs(float ifh)
{
    double iCel = 0.0;
    iCel = ((double)(ifh - 32) * (double)(5/9));
    return iCel;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in fh: ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("The temperature is celsius is: %lf",dRet);

    return 0;
}