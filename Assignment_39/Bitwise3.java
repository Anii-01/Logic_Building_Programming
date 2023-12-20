// Accept iNo and iPos , ON that bit , return modified number.
// 10 3 14

import java.util.*;

class Bitwise3
{
    public static int CheckBit(int iNo , int iPos)
    {
        int iResult = 0;
        int iMask = 00000001;

        iMask = iMask << (iPos-1) ;
        iResult = iNo | iMask ;
        return iResult;
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int iNo = 0;
        int iPos = 0;
        int iRet = 0;
        System.out.println("Enter the number : ");
        iNo = sc.nextInt();
        System.out.println("Enter the bit position : ");
        iPos = sc.nextInt();
        iRet = CheckBit(iNo,iPos);
        System.out.println("The Modified number is : "+iRet);
    }
}