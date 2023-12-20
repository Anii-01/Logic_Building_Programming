// check 5th and 18th bit is : on or off
// 123456 = off
// 456789 = On

import java.util.*;

class Bitwise2
{
    public static boolean CheckBit(int iNo)
    {
        int iResult = 0;
        int iMask = 0X00020010;                //(5th & 18th bit)      = 0000 0000 0000 0010 0000 0000 0001 0000
                                                 //imask               =   0   0    0     2   0    0    1    0                                     
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
            System.out.println("5th and 18th bit is ON!");
        }
        else
        {
            System.out.println("5th and 18th bit is OFF!");
        }
    }
}