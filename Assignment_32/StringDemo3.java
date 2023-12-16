// Count Difference = small - Capital

import java.util.*;

class StringDemo3
{
    public static int CountDiffer(String str)
    {
        int CapitalCount = 0;
        int SmallCount = 0;
        int i = 0;
        for(i = 0 ; i < str.length(); i ++)
        {
            if((str.charAt(i) >= 'A') && (str.charAt(i)<= 'Z'))
            {
                CapitalCount ++;
            }
            if((str.charAt(i) >= 'a') && (str.charAt(i)<= 'z'))
            {
                SmallCount ++;
            }
        }
        return (SmallCount - CapitalCount);
    }

    public static void main(String args[])
    {
        int iRet = 0;
        Scanner sc = new Scanner(System.in);
        
        String str = null;
        System.out.println("Enter the string : ");
        str = sc.nextLine();
        iRet = CountDiffer(str);
        System.out.println("The Difference is : "+iRet);
    }
}