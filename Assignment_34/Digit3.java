// Accept number from user and return count of digits between 3 and 7

import java.util.*;

class Count 
{
    public int iNo;
    public int iCount;

    public Count(int iNo)
    {
        this.iNo = iNo;
    }

    public int CountRange()
    {
        int idigit = 0;
        iCount = 0;
        while(iNo != 0)
        {
            idigit = iNo % 10;
            iNo = iNo / 10;

            if((idigit > 3) && (idigit < 7))
            {
                iCount ++;
            }
        }
        return iCount;
    }
}

class Digit3
{
    public static void main(String args[])
    {
        int iNo = 0;
        int iRet = 0;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number : ");
        iNo = sc.nextInt();

        Count cobj = new Count(iNo);
        iRet = cobj.CountRange();

        System.out.println("The count of odd digits are : " + iRet);

    }
}