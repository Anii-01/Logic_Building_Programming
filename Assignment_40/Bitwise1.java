// Accept one number and count the On(1) bits without using % and / operator

import java.util.*;

class Bitwise1
{
    public static int CountOn(int iNo)
    {
        int iCount = 0;

        while (iNo > 0)
        {
            iCount = iCount + (iNo & 1);
            iNo = iNo >> 1;
        }
        return iCount;
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter the Number : ");
        iNo = sc.nextInt();
        iRet = CountOn(iNo);

        System.out.println("The Count of On bits is: " + iRet);
    }
}
