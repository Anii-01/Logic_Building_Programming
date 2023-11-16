/* 
Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4  iCol = 4

Output : * * * #
         * * # *
         * # * *
         # * * *
*/

#include <stdio.h>

void Pattern(int iRow , int iCol)
{
    int i , j = 0;

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = iCol ; j > 0 ; j--)
        {
            if(i == j)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 , iValue2 = 0;

    printf("Enter value of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter value of columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1 , iValue2);
    
    return 0;
}