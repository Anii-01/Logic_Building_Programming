// toggle 7th bit and return modified number ..
// 137 = 201

import java.util.*;

class Bitwise3
{
    public static int Togglebit(int iNo)
    {
        int iMask = 0X00000040;                                     // 0000 0000 0000 0000 0000 0000 0100 0000
        int iResult = 0;                                            //   0    0    0    0    0    0    4    0

        iResult = iNo ^ iMask;
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