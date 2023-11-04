// Accept number of rows and number of columns from user and display below pattern : 

/*
Input : iRow = 4  iCol = 4
Output : 1 2 3 4 
         5 6 7 8 
         9 1 2 3
         4 5 6 7 
*/

#include <stdio.h>

void Pattern(int iRow , int iCol)
{
    int i , j = 0;
    int iCount = 1;

    for(i = 1; i <= iRow; i++)
    {   
        for(j = 1; j <= iCol; j++)
        {
            if(iCount == 10)
                {
                    iCount = 1;
                }

            printf("%d\t",iCount);
            iCount ++;
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