// Accept number from user and return multiplication of digits

import java.util.*;

class Count 
{
    public int iNo;
    public int iCount;

    public Count(int iNo)
    {
        this.iNo = iNo;
    }

    public int DigitMulti()
    {
        int idigit = 0;
        int iMulti = 1;

        while(iNo != 0)
        {
            idigit = iNo % 10;
            iNo = iNo / 10;
            if(idigit == 0)
            {
                continue;
            }
            iMulti = iMulti * idigit;
        }
        return iMulti;
    }
}

class Digit4
{
    public static void main(String args[])
    {
        int iNo = 0;
        int iRet = 0;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number : ");
        iNo = sc.nextInt();

        Count cobj = new Count(iNo);
        iRet = cobj.DigitMulti();

        System.out.println("The multiplication is : " + iRet);

    }
}