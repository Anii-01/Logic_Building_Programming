// Accept 2 strings ,check content equal or not

import java.util.*;

class StringDemo2
{
    public static boolean CompareStr(String str1 , String str2)
    {
       if(str1.equals(str2))
       {
        return true;
       }
       return false;
    }
   
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        String str1 = null;
        String str2 = null;
        boolean bRet  = false;;

        System.out.println("Enter first string : ");
        str1 = sc.nextLine();
        System.out.println("Enter second string : ");
        str2 = sc.nextLine();
        bRet = CompareStr(str1, str2);

        if(bRet == true)
        {
            System.out.println("Strings are equal!");
        }
        else
        {
            System.out.println("Strings are not equal!");
        }
    }
}
