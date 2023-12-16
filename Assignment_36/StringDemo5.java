// Accept string , reverse the contents by toggling the case

import java.util.*;

class StringDemo5
{
    public static boolean StrRevTogX(String str)
    {
        int i = 0;
        String Orig = str;
        String Rev = "";
        for(i = str.length()-1 ; i >= 0 ; i--)
        {
            Rev = Rev + str.charAt(i);
        }
        if(Rev.equalsIgnoreCase(str))
        {
            return true;
        }
            return false;
    }
   
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        String str = null;

        System.out.println("Enter string : ");
        str = sc.nextLine();
        boolean iRet = false;

        iRet = StrRevTogX(str);
        if(iRet == true)
        {
            System.out.println("String is Palindrome!");
        }
        else
        {
            System.out.println("String is not a Palindrome!");
        }
    }
}
