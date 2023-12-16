// Accept String and print in reverse order

import java.util.*;

class StringDemo5
{
    public static void ReverseString(String str)
    {
        int i = 0;

        System.out.println("Original String is : "+str);
        System.out.print("Reverse String is : ");
        
        for(i = str.length()-1; i >= 0; i--)
        {
            System.out.print(str.charAt(i));
        }
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        String str = null;
        System.out.println("Enter the String : ");
        str = sc.nextLine();
        ReverseString(str);
    }
}