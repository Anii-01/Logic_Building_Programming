// Accept 2 strings ,check first n contents of both string are equal or not

import java.util.*;

class StringDemo3
{
    public static boolean StrNCmpX(String str1 , String str2 , int Range)
    {
       if((str1.substring(0,Range)).equals(str2.substring(0,Range)))
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
        int Range = 0;
        boolean bRet  = false;;

        System.out.println("Enter first string : ");
        str1 = sc.nextLine();
        System.out.println("Enter second string : ");
        str2 = sc.nextLine();
        System.out.println("Enter how many characters have to compare ?");
        Range = sc.nextInt();

        bRet = StrNCmpX(str1, str2 , Range);

        if(bRet == true)
        {
            System.out.println("Strings contents are equal!");
        }
        else
        {
            System.out.println("Strings contents are not equal!");
        }
    }
}
