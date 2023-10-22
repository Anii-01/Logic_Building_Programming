// Write a program which accept width and height of rectangle from user and calculate its area.

#include <stdio.h>

double RectArea(float fWidth , float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight ;
    return dArea;
}

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter the width : ");
    scanf("%fl",&fValue1);

    printf("Enter the height : ");
    scanf("%fl",&fValue2);

    dRet = RectArea(fValue1, fValue2);
    printf("%The area of rectangle is : %fl",dRet);

    return 0;
}