// check:  7th , 15th , 21st , 28th bit is : on or off


import java.util.*;

class Bitwise3
{
    public static boolean CheckBit(int iNo)
    {
        int iResult = 0;
        int iMask = 0X08104040;                // (7th & 15th & 21st & 28th bit)      = 0000 1000 0001 0000 0100 0000 0100 0000
                                                 //imask                              =   0   8    1     0   4    0    4    0                                     
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
            System.out.println("7th , 15th , 21st and 28th bit is ON!");
        }
        if(iRet == false)
        {
            System.out.println("bit is OFF!");
        }
    }
}