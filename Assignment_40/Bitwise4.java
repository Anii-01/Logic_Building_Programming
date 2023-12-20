//Accept one number, two positions from user and check wheather bit at first or bit at second position is on or off?

import java.util.*;

class Bitwise4
{
    public static boolean CheckBit(int iNo , int FirstPos , int SecondPos)
    {
        int iMask1 = 0X00000001;
        int iMask2 = 0X00000001;

        int iResult1 = 0;
        int iResult2 = 0;

        iMask1 = iMask1 << (FirstPos-1);
        iMask2 = iMask2 << (SecondPos-1);

        iResult1 = iNo & iMask1;
        iResult2 = iNo & iMask2;
        
        if (( iResult1 == iMask1) || ( iResult2 == iMask2 ))
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
        int FirstPos = 0;
        int SecondPos = 0;
        boolean bRet = false;

        System.out.println("Enter the Number : ");
        iNo = sc.nextInt();

        System.out.println("Enter First Position : ");
        FirstPos = sc.nextInt();
        System.out.println("Enter Second Position : ");
        SecondPos = sc.nextInt();
        bRet = CheckBit(iNo , FirstPos , SecondPos);
        if(bRet == true)
        {
            System.out.println("Bit is On!");
        }
        else
        {
            System.out.println("Bit is Off");
        }
    }
}