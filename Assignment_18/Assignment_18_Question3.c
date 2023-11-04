// Accept number of rows and number of columns from user and display below pattern :

/*

 input : iRow = 3 iCol = 5
 output :   5 4 3 2 1 
            5 4 3 2 1 
            5 4 3 2 1

*/

#include <stdio.h>

void Display(int iRow , int iCol)
{
    int i , j = 0;
    for(i = 0; i < iRow ; i++)
    {
        for(j = iCol ; j > 0 ; j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}

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

