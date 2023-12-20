//Accept 1 number from user and range of positions from user . Toggle all bits from that range
// 0100 1101 0010    : 1234
// 0100 1110 0010    : 1250

import java.util.*;

class Bitwise5
{
    public static int CountOn(int iNo, int Start, int End)
    {
        int iMask = 0X00000001;
        int iCnt = 0;

        while (iMask != 0X00000000) 
        {
            iCnt ++;
            if((iCnt >= Start) && (iCnt <= End))
            {
                iNo = iNo ^ iMask;
            }
            iMask = iMask << 1;  
        }
        return iNo;
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int iNo = 0;
        int Start = 0;
        int End = 0;
        int iRet = 0;
        System.out.println("Enter the Number : ");
        iNo = sc.nextInt();
        System.out.println("Enter the starting number of range : ");
        Start = sc.nextInt();
        System.out.println("Enter the ending number of range : ");
        End = sc.nextInt();
        iRet = CountOn(iNo,Start,End);
        System.out.println("The Modified number is: "+ iRet);
    }
}