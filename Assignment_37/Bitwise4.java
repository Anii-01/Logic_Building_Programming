// check:  7th , 8th and 9th bit is : on or off
// 455 = On

import java.util.*;

class Bitwise4
{
    public static boolean CheckBit(int iNo)
    {
        int iResult = 0;
        int iMask = 0X000001C0;                //(7th & 8th & 9th bit)      = 0000 0000 0000 0000 0000 0001 1100 0000
                                                 //imask               =       0   0    0     0   0    1    c    0                                     
        iResult = iNo & iMask ;
        if( iResult == iMask)                         
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
        System.out.println("Enter the number : ");
        int iNo = 0;
        boolean iRet = false;
        iNo = sc.nextInt();
        iRet = CheckBit(iNo);

        if(iRet == true)
        {
            System.out.println("7th , 8th and 9th bit is ON!");
        }
        else
        {
            System.out.println("bit is OFF!");
        }
    }
}