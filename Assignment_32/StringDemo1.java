// Count Capital

import java.util.*;

class StringDemo1
{
    public static int CountCapital(String str)
    {
        int iCount = 0;
        int i = 0;
        for(i = 0 ; i < str.length(); i ++)
        {
            if((str.charAt(i) >= 'A') && (str.charAt(i)<= 'Z'))
            {
                iCount ++;
            }
        }
        return iCount;
    }

    public static void main(String args[])
    {
        int iRet = 0;
        Scanner sc = new Scanner(System.in);
        
        String str = null;
        System.out.println("Enter the string : ");
        str = sc.nextLine();
        iRet = CountCapital(str);
        System.out.println("The Count of capital letters are : "+iRet);
    }
}