// off 7th and 10th bit if on , and return modified number ..
// 577 = 1

import java.util.*;

class Bitwise2
{
    public static int Ofbit(int iNo)
    {
        int iMask = 0X00000240;                                     // 0000 0000 0000 0000 0000 0010 0100 0000
        int iResult = 0;                                            //   0    0    0    0    0    2    4    0

        iResult = (iNo & iMask);

        if(iResult == iMask)
        {
            iNo = iNo ^ iMask ;
            return iNo;
        }
        else
        {
            return iNo;
        }
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;
        System.out.println("Enter the Number : ");
        iNo = sc.nextInt();
        iRet = Ofbit(iNo);
        System.out.println("The updated number is : "+iRet);
    }
}