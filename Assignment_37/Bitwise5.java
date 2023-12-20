// check:  1st and last bit is : on or off
// iNo = 2147483649  = On

import java.util.*;

class Bitwise5
{
    public static boolean CheckBit(long iNo)
    {
        long iResult = 0;
        long iMask = 0X80000001;                //(1st and last bit)      = 1000 0000 0000 0000 0000 0000 0000 0001
                                                 //imask               =     8   0    0     0   0    0    0    1                                    
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
        long iNo = 0;
        boolean iRet = false;
        iNo = sc.nextLong();
        iRet = CheckBit(iNo);

        if(iRet == true)
        {
            System.out.println("1st and last bit is ON!");
        }
        else
        {
            System.out.println("bit is OFF!");
        }
    }
}