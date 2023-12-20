//Accept 2 numbers from user , display position of common ON bits.

import java.util.*;

class Bitwise2
{
    public static void DisplayCommon(int iNo1, int iNo2)
    {
        int iResult = 0;
        int iCnt = 0;
        int iMask = 0x00000001;
        int iCommon = iNo1 & iNo2;

        while (iMask != 0)
        {
            iCnt++;
            iResult = iCommon & iMask;

            if (iResult != 0)
            {
                System.out.print(iCnt+ " ");
            }

            iMask = iMask << 1;
        }
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int iNo1 = 0;
        int iNo2 = 0;

        System.out.println("Enter 1st Number : ");
        iNo1 = sc.nextInt();
        System.out.println("Enter 2nd Number : ");
        iNo2 = sc.nextInt();
        
        System.out.println("Position of common ON bits: ");
        DisplayCommon(iNo1, iNo2);
    }
}
