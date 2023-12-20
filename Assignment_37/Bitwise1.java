// check 15th bit is : on or off
// iNo = 12181 , bit is off
// iNo = 123456 , 122345 = bit is on

import java.util.*;

class Bitwise1
{
    public static boolean CheckBit(int iNo)
    {
        int iResult = 0;
        int iMask = 0X00004000;                //(15th bit)      = 0000 0000 0000 0000 0100 0000 0000 0000
                                                // iMask             0    0   0    0     4    0   0     0                                            
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
            System.out.println("15th bit is ON!");
        }
        else
        {
            System.out.println("15th bit is OFF!");
        }
    }
}