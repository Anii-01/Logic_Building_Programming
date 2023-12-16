// Accept number from user and return differ between sumation of even and odd digits

import java.util.*;

class Count 
{
    public int iNo;
    public int iCount;

    public Count(int iNo)
    {
        this.iNo = iNo;
    }

    public int CountDiffer()
    {
        int idigit = 0;
        int iEvenSum = 0;
        int iOddSum = 0;

        while(iNo != 0)
        {
            idigit = iNo % 10;
            iNo = iNo / 10;
            if((idigit % 2) == 0)
            {
                iEvenSum = iEvenSum + idigit;
            }
            else
            {
                iOddSum = iOddSum + idigit;
            }
        }
        return (iEvenSum - iOddSum);
    }
}

class Digit5
{
    public static void main(String args[])
    {
        int iNo = 0;
        int iRet = 0;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number : ");
        iNo = sc.nextInt();

        Count cobj = new Count(iNo);
        iRet = cobj.CountDiffer();

        System.out.println("The Difference is : " + iRet);

    }
}