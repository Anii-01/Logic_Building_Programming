// Accept iNo , Toggle 1st and last nibble contents, return modified number.

//0100 1101 0010  - 1234
//1011 0010 1101  - 2861

import java.util.*;

class Bitwise5
{
    public static int ToggleBit(int iNo)
    {
        int iResult = 0;
        int iMask = 0XF000000F;                                // 1111 0000 0000 0000 0000 0000 0000 0000 1111
                                                               //   f   0    0    0    0    0    0    0    f
        iResult = iNo ^ iMask ;
        return iResult;
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;
        System.out.println("Enter the number : ");
        iNo = sc.nextInt();
        iRet = ToggleBit(iNo);
        System.out.println("The Modified number is : " +iRet);
    }
}