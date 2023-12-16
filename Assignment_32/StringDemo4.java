// Check Vowels

import java.util.*;

class StringDemo4
{
    public static boolean CheckVowels(String str)
    {
        int i = 0;
        char testch ;
        
        for(i = 0 ; i < str.length(); i ++)
        {
            testch = str.charAt(i);
            if((testch == 'a')|| (testch == 'e') || (testch == 'i') || (testch == 'o')|| (testch == 'u'))
            {
                return true;
            }
        }
        return false;
    }

    public static void main(String args[])
    {
        boolean iRet = false;
        Scanner sc = new Scanner(System.in);
        
        String str = null;
        System.out.println("Enter the string : ");
        str = sc.nextLine();
        iRet = CheckVowels(str);

        if(iRet == true)
        {
            System.out.println("Vowels are present!!");
        }
        else
        {
            System.out.println("Vowels are not present!!");
        }
    }
}