// Count Small

import java.util.*;

class StringDemo2
{
    public static int CountSmall(String str)
    {
        int iCount = 0;
        int i = 0;
        for(i = 0 ; i < str.length(); i ++)
        {
            if((str.charAt(i) >= 'a') && (str.charAt(i)<= 'z'))
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
        iRet = CountSmall(str);
        System.out.println("The Count of small letters are : "+iRet);
    }
}