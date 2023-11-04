// Accept number of rows and number of columns from user and display below pattern : 

/*
Input : iRow = 4  iCol = 4
Output : 2 4 6 8 10
         1 3 5 7 9
         2 4 6 8 10
         1 3 5 7 9
*/

#include <stdio.h>

void Pattern(int iRow , int iCol)
{
    int i , j = 0;
    
    for(i = 1 ; i <= iRow ; i++)
    {
        int iCount = 1;
        for(j = 1; j <= iCol ; j++)
        {
           if(i % 2 == 0)
           {
            printf("%d\t",iCount);
            iCount = iCount+2;
           }
           else
           {
            printf("%d\t",2*j);
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