// Accept iNo and iPos , check bit is ON or OFF
// 10 2 True

import java.util.*;

class Bitwise1
{
    public static boolean CheckBit(int iNo , int iPos)
    {
        int iResult = 0;
        int iMask = 00000001;

        iMask = iMask << (iPos-1) ;
        iResult = iNo & iMask ;

        if(iResult == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int iNo = 0;
        int iPos = 0;
        boolean bRet = false;
        System.out.println("Enter the number : ");
        iNo = sc.nextInt();
        System.out.println("Enter the bit position : ");
        iPos = sc.nextInt();
        bRet = CheckBit(iNo,iPos);
        if(bRet == true)
        {
            System.out.println("Bit is ON! at position "+iPos);
        }
        else
        {
            System.out.println("Bit is OFF! at position "+iPos);
        }
    }
}