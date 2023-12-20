// on first 4 bits and return modified number..
// 73 = 79

import java.util.*;

class Bitwise5
{
    public static int Togglebit(int iNo)
    {
        int iMask = 0X0000000f;                                     // 0000 0000 0000 0000 0000 0000 0000 1111
        int iResult = 0;                                            //   0    0    0    0    0    0    0    f

        iResult = iNo | iMask;
        return iResult;
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;
        System.out.println("Enter the Number : ");
        iNo = sc.nextInt();
        iRet = Togglebit(iNo);
        System.out.println("The updated number is : "+iRet);
    }
}