/* 
Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4  iCol = 4

Output : 1 2 3 4 5
         1 2     5
         1   3   5
         1   3 4 5
         1 2 3 4 5
*/

#include <stdio.h>

void Pattern(int iRow , int iCol)
{
    int i , j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j<= iCol; j++)
        {
            if(i == j)
            {
                printf("%d\t",j);
            }
            else if((j == 1) || (i == 1) || (i == iRow) || (j == iCol))
            {
                printf("%d\t",j);
            }
            else
            {
                printf(" \t");
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