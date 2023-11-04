// Accept number of rows and number of columns from user and display below pattern : 

/*

Input : iRow = 6  iCol = 5
Output : 1 2 3 4 
         1 * * 4
         1 * * 4
         1 2 3 4 
*/

#include <stdio.h>

void Pattern(int iRow , int iCol)
{
    int i, j = 0;

    for(i=1 ;i<=iRow ; i++)
    {
        for(j=1 ; j<=iCol; j++)
        {
            /*
            if((j == 1) || (j == iCol))
            {
                printf("%d\t",j);
            }
            else if((i == 1))
            {
                printf("%d\t",j);
            }
            else if((i == iRow))
            {
                printf("%d\t",j);
            }
            else
            {
                printf("*\t");
            }
            */
        
            if((j==1) || (j==iCol) || (i==1) || (i==iRow))
            {
                printf("%d\t",j);
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
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of rows and number of columns : \n");
    scanf("%d %d",&iValue1 , &iValue2 );

    Pattern(iValue1 , iValue2);

    return 0;
}