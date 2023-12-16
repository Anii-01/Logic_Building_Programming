// Accept 2 strings , Concate 1st + 2nd(characters count given by user)

import java.util.*;

class StringDemo1
{
    public static void ConcateString(String str1 , String str2 , int range)
    {
        String Result;
        String NewStr2 = "";

        if((range >= 0) && (range <= str2.length()))
        {
            int i = 0; 
            for(i = 0; i<range; i++)
            {
                NewStr2 = NewStr2 + str2.charAt(i);
            }
            Result = str1.concat(NewStr2);
            System.out.println(Result);
        }
        else
        {
            System.out.println("Invalid range");
            Result = str1.concat(str2);
            System.out.println(Result);
        }   
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        String str1 = null;
        String str2 = null;
        int iCnt = 0;

        System.out.println("Enter first string : ");
        str1 = sc.nextLine();
        System.out.println("Enter second string : ");
        str2 = sc.nextLine();
        System.out.println("Enter count of characters : ");
        iCnt = sc.nextInt();

        ConcateString(str1, str2, iCnt);

    }
}
