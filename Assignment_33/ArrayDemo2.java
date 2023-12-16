// Accept n numbers and display divisible by 5

import java.util.*;

public class ArrayDemo2
{
    public static void Display(int Arr[])
    {
        int i = 0;

        System.out.println("The numbers divisible by 5 are : ");
        for(i = 0; i < Arr.length ; i++)
        {
            if((Arr[i] % 5) == 0)
            {
                System.out.print(Arr[i]+" ");
            }
        }
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("How many numbers you have to enter : ");
        int no = sc.nextInt();

        int Arr[] = new int[no];
        
        int i = 0;

        for(i = 0; i < Arr.length; i++)
        {
            System.out.println("Enter " + i +" no : ");
            Arr[i] = sc.nextInt();
        }

        Display(Arr);
    }
}