//Accept a number and check 9th or 12th bit is on or off ?
// 1234 = off
// 257 = on
// 257456 = on

import java.util.*;

class Bitwise3
{
    public static boolean CheckBit(int iNo)
    {
        int iResult1 = 0;
        int iResult2 = 0;
        int iMask1 = 0X00000100;                        // 0000 0000 0000 0000 0000 0001 0000 0000  'OR'  0000 0000 0000 0000 0000 1000 0000 0000
        int iMask2 = 0X00000800;                        //   0    0   0    0    0     1    0    0           0    0   0    0    0     8    0    0
        iResult1 = iMask1 & iNo;
        iResult2 = iMask2 & iNo;
        if((iResult1 == iMask1) || (iResult2 == iMask2))
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
        boolean bRet = false;
        System.out.println("Enter the Number : ");
        iNo = sc.nextInt();
        bRet = CheckBit(iNo);
        if(bRet == true)
        {
            System.out.println("Bits are On!");
        }
        else
        {
            System.out.println("Bits are OFF!");
        }
    }
}