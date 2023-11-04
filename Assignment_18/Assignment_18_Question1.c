// Accept number of rows and number of columns from user and display below pattern :

/*

 input : iRow = 4 iCol = 3
 output :   * * *
            * * *
            * * *
            * * *
*/

#include <stdio.h>

void Display(int iRow , int iCol)
{
    int i , j = 0;
    for(i = 0; i < iRow ; i++)
    {
        for(j = 0 ; j < iCol ; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

#include <stdio.h>

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &iValue1);

    printf("Enter the number of col: ");
    scanf("%d", &iValue2);

    Display(iValue1 , iValue2);
    
    return 0;
}

