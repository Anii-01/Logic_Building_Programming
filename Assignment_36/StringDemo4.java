// Accept string , reverse the contents by toggling the case

import java.util.*;

class StringDemo4
{
    public static void StrRevTogX(String str)
    {
        int i = 0;
        String Rev = "";
        for(i = str.length()-1 ; i >= 0 ; i--)
        {
            if((str.charAt(i) >= 'A') && (str.charAt(i) <= 'Z'))
            {
                int a = str.charAt(i) + 32;
                char ch = (char)a;
                Rev = Rev+ch;
            }
            else
            {
                int b = str.charAt(i) - 32;
                char ch = (char)b;
                Rev = Rev+ch;
            }
            //System.out.println(Rev);
        }
        System.out.println(Rev);
    }
   
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        String str = null;

        System.out.println("Enter string : ");
        str = sc.nextLine();

        StrRevTogX(str);
    }
}
