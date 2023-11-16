// Problem Statement : Write a program which accept number from user and return difference between summation of all its factors and non factors.

#include <stdio.h>

int CalculateDifference(int iNo)
{
	int iCnt = 0;
	int isumFact = 0;
	int isumNonFact = 0;
	int iDifference = 0;
	
	for(iCnt =2 ; iCnt < iNo ; iCnt ++)
	{
		if((iNo % iCnt) == 0)
		{
			isumFact = isumFact + iCnt;
			
		}
		else{
			isumNonFact = isumNonFact + iCnt;
		}
	}
		printf("Sum of Non-factors is: %d \n",isumNonFact);
		printf("Sum of Factors is: %d \n",isumFact);
		iDifference = isumNonFact - isumFact;
		return iDifference;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number: ");
	scanf("%d",&iValue);
	
	iRet = CalculateDifference(iValue);

	printf("The Difference is: %d", iRet);
	
	return 0;	
}
	
